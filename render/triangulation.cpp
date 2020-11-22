//
// Created by lidan on 20/11/2020.
//

#include "triangulation.h"

// need to triagulation face

std::vector<int> argsort(const glm::vec3 array)
{
    const int array_len(3);
    std::vector<int> array_index(array_len, 0);
    for (int i = 0; i < array_len; ++i)
        array_index[i] = i;

    std::sort(array_index.begin(), array_index.end(),
              [&array](int pos1, int pos2) {return (array[pos1] < array[pos2]);});

    return array_index;
}


Triangulation::Triangulation(std::vector<std::vector<glm::vec3>>& oneface)
{
    min_p = glm::vec3(std::numeric_limits<float>::max(),std::numeric_limits<float>::max(),std::numeric_limits<float>::max()) ;
    max_p = glm::vec3(std::numeric_limits<float>::min(),std::numeric_limits<float>::min(),std::numeric_limits<float>::min()) ;

    for(int i = 0 ; i< oneface.size();i++)
    {
        for(int j = 0 ; j < oneface[i].size(); j++)
        {
            pointOfOneface.push_back(oneface[i][j]) ;
            min_p = glm::min(min_p,oneface[i][j]) ;
            max_p = glm::max(max_p,oneface[i][j]) ;
        }
    }

    glm::vec3 skip = max_p - min_p ;
    std::vector<int> indexsort = argsort(skip) ;

    dimension0 = indexsort[1] ;
    dimension1 = indexsort[2] ;

    // 外环
    int count = 0  ;
    vector<p2t::Point*> polyline ;
    for(int i = 0 ; i < oneface[0].size() ;i++)
    {
        Point* p = new Point(oneface[0][i][dimension0],oneface[0][i][dimension1]) ;
        dstToIndex[p] = count++ ;
        polyline.push_back(p) ;
    }


    cdt = new CDT(polyline);

    // 内环
    if(oneface.size()>1)
    {
        for(int j = 1 ; j<oneface.size();j++)
        {
            vector<Point*> hole ;
            for(int k = 0 ; k< oneface[j].size();k++)
            {
                Point* p = new Point(oneface[j][k][dimension0],oneface[j][k][dimension1]) ;
                dstToIndex[p] = count++ ;
                hole.push_back(p) ;
            }
            cdt->AddHole(hole) ;
        }
    }

}

void Triangulation::beginTriangulation()
{
    cdt->Triangulate();
    triangles = cdt->GetTriangles();
    for(int i = 0 ; i< triangles.size() ;i++)
    {
        int idx0 = dstToIndex[triangles[i]->GetPoint(0)] ;
        int idx1 = dstToIndex[triangles[i]->GetPoint(1)] ;
        int idx2 = dstToIndex[triangles[i]->GetPoint(2)] ;
        result.push_back(pointOfOneface[idx0]) ;
        result.push_back(pointOfOneface[idx1]) ;
        result.push_back(pointOfOneface[idx2]) ;
    }
}

vector<glm::vec3>& Triangulation::getResult()
{
    return result ;
}
