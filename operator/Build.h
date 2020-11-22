//
// Created by lidan on 19/11/2020.
//

#ifndef EULEROPERATOR_BUILD_H
#define EULEROPERATOR_BUILD_H
#include "operator.h"
#include "Writer.h"

#include <iostream>
#include <stack>
#include <fstream>
#include <string>
#include <glm/vec3.hpp>

class Build {
private:
    Euler_operator* op ;
    Writer* writer = nullptr ;
public:
    Build(){ op = new Euler_operator() ; writer = new  Writer(op) ;}
    void BuildCubeWithGenus() ;
    void write2objFile(const char* filename) ;
    void write2vector(std::vector<std::vector<std::vector<glm::vec3>>>& pointOfAllFace) ;
};


#endif //EULEROPERATOR_BUILD_H
