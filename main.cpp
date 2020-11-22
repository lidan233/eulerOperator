#include <glm/glm.hpp>
#include <string>
#include <iterator>

#include "triangulation.h"
#include "render.h"
#include "callback.h"
#include "Build.h"

using namespace std;
using namespace p2t;


std::vector<glm::vec3> getResult(std::vector<std::vector<std::vector<glm::vec3>>>& data)
{
    std::vector<glm::vec3> allres ;
    for(int i = 0 ; i<data.size();i++)
    {
        Triangulation triangulation(data[i]) ;
        triangulation.beginTriangulation() ;
        std::vector<glm::vec3> res = triangulation.getResult() ;
        allres.insert(allres.end(),res.begin(),res.end());
    }
    return allres ;
}

std::vector<glm::vec3> getLines(std::vector<std::vector<std::vector<glm::vec3>>>& data)
{
    std::vector<glm::vec3> alllines ;
    for(int i = 0 ; i< data.size(); i++)
    {
        for(int j = 0 ; j < data[i].size() ;j++)
        {
            glm::vec3 t = data[i][j][0] ;
            for(int k = 1 ; k < data[i][j].size() ;k++)
            {
                alllines.push_back(t) ;
                alllines.push_back(data[i][j][k]) ;
                t = data[i][j][k] ;
            }
        }
    }
    return alllines ;
}


int main(int argc, char* argv[])
{
    std::string filename = "C:\\Users\\lidan\\CLionProjects\\eulerOperator\\result_tmp\\first.txt" ;
    std::vector<std::vector<std::vector<glm::vec3>>> pointOfAllFace ;
    Build* build = new Build() ;
    build->BuildCubeWithGenus() ;
    build->write2objFile(filename.c_str()) ;
    build->write2vector(pointOfAllFace) ;

    std::vector<glm::vec3> lines = getLines(pointOfAllFace) ;
    std::vector<glm::vec3> res = getResult(pointOfAllFace) ;
    std::string vs = "C:\\Users\\lidan\\CLionProjects\\eulerOperator\\render\\glsl\\vertex.vs" ;
    std::string fs = "C:\\Users\\lidan\\CLionProjects\\eulerOperator\\render\\glsl\\fragment.fs" ;

    Render* render = new Render(is_show_line,&res,&lines,vs,fs,SCR_WIDTH,SCR_HEIGHT,processInput,framebuffer_size_callback,scroll_callback,mouse_callback) ;
    allrender = render ;
    render->Init() ;
    render->MainLoop(camera) ;
    render->ShutDown(0) ;

    return 0;
}




