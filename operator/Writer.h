//
// Created by lidan on 20/11/2020.
//

#ifndef EULEROPERATOR_WRITER_H
#define EULEROPERATOR_WRITER_H

#include <vector>
#include <fstream>
#include <glm/glm.hpp>

#include "operator.h"
#include "halfEdge.h"

class Writer {
private:
    Euler_operator* op ;

public:
    Writer(Euler_operator* ope):op(ope){}
    void write(Vertex* start,std::ofstream& out) ;
    void write(Loop* loop, std::ofstream& out, int count);
    void write(Face* face, std::ofstream& out, int count) ;
    void write(Solid* solid, std::ofstream& out, int count) ;
    void writeAll(std::ofstream& out) ;
    void getVertex(Vertex* loop,std::vector<glm::vec3>& pointOfLoop) ;
    void getLoop(Loop* loop, std::vector<glm::vec3>& pointOfLoop) ;
    void getFace(Face* face, std::vector<std::vector<glm::vec3>>& pointOfFace) ;
    void getALL( std::vector<std::vector<std::vector<glm::vec3>>>& pointOfAllFace) ;
};


#endif //EULEROPERATOR_WRITER_H
