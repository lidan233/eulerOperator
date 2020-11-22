//
// Created by lidan on 20/11/2020.
//

#ifndef EULEROPERATOR_TRIANGULATION_H
#define EULEROPERATOR_TRIANGULATION_H

#include <cstdlib>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>
#include <time.h>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <limits>
#include <map>

#include "poly2tri.h"
using namespace p2t;
using namespace std ;

// 目前这个三角剖分面 仅仅支持某个
class Triangulation{
private:

    int dimension0 = -1 ;
    int dimension1 = -1 ;

    glm::vec3 min_p ;
    glm::vec3 max_p ;

    std::vector<glm::vec3> pointOfOneface ;

    std::map<Point*,int> dstToIndex ;

/// Constrained triangles
    vector<Triangle*> triangles;
/// result to render
    vector<glm::vec3> result ;

    CDT* cdt = nullptr ;
public:
    Triangulation(std::vector<std::vector<glm::vec3>>& points) ;
    void beginTriangulation() ;
    vector<glm::vec3>& getResult() ;

};
#endif //EULEROPERATOR_TRIANGULATION_H
