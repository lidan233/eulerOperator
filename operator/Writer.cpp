//
// Created by lidan on 20/11/2020.
//

#include "Writer.h"

void Writer::write(Vertex* start, std::ofstream& out)
{
     out<<" ("<<start->getX()<<", "
              <<start->getY()<<", "
              <<start->getZ()<<") " ;
}
void Writer::write(Loop* loop, std::ofstream& out, int count)
{
    HalfEdge* start_edge = loop->getLbeginHalfEdge() ;
    std::string space = "            " ;
    if(start_edge!= nullptr)
    {
        out<<space<<" Loop "<<count<<" " ;
        do
        {
            write(start_edge->getStartV(),out) ;
            start_edge = start_edge->getNext() ;
        }while(start_edge!=loop->getLbeginHalfEdge()) ;
        out<<std::endl ;
    }
}

void Writer::write(Face* face, std::ofstream& out, int count )
{
    Loop* loop = face->outloop ;
    std::string space = "        " ;
    out<<space<<"Face "<<count<<std::endl  ;
    count = 0 ;
    if(loop!= nullptr)
    {
        write(loop,out, count ) ;
        count++ ;
        loop = face->in_loop ;
        if(loop!= nullptr)
        {
            do{
                write(loop,out, count) ;
                loop = loop->getNext() ;
                count++ ;
            }while(loop!= nullptr&& loop!= face->in_loop) ;
        }

    }
}

void Writer::write(Solid* solid,std::ofstream& out, int count )
{
    Face* start = solid->sfaces ;
    out<<"Solid "<<count<<std::endl ;

    count = 0 ;
    if (start!= nullptr)
    {
        do{
            write(start,out,count) ;
            start = start->nextf ;
            count++ ;
        }while(start!=solid->sfaces) ;

    }

}

void Writer::writeAll(std::ofstream& out)
{
    std::vector<Solid*> allsolid = op->getAllSolids() ;

    for(auto begin= allsolid.begin() ; begin!=allsolid.end() ;begin++)
    {
        write((*begin),out,(begin-allsolid.begin())) ;
    }
}

void Writer::getVertex(Vertex* vs,std::vector<glm::vec3>& pointOfLoop)
{
    pointOfLoop.push_back(glm::vec3(vs->getX(),vs->getY(),vs->getZ())) ;
}

void Writer::getLoop(Loop* loop, std::vector<glm::vec3>& pointOfLoop)
{
    HalfEdge* start_edge = loop->getLbeginHalfEdge() ;
    if(start_edge!= nullptr)
    {
        do
        {
            getVertex(start_edge->getStartV(),pointOfLoop) ;
            start_edge = start_edge->getNext() ;
        }while(start_edge!=loop->getLbeginHalfEdge()) ;
    }
}

void Writer::getFace(Face* face, std::vector<std::vector<glm::vec3>>& pointOfFace)
{
    Loop* loop = face->outloop ;
    if(loop!= nullptr)
    {
        std::vector<glm::vec3> pointOfLoop ;
        getLoop(loop, pointOfLoop) ;
        pointOfFace.push_back(pointOfLoop) ;
        loop = face->in_loop ;
        if(loop!= nullptr)
        {
            do{
                std::vector<glm::vec3> pointOfLoop1 ;
                getLoop(loop,pointOfLoop1) ;
                loop = loop->getNext() ;
                pointOfFace.push_back(pointOfLoop1) ;
            }while(loop!= nullptr&& loop!= face->in_loop) ;
        }

    }
}

void Writer::getALL( std::vector<std::vector<std::vector<glm::vec3>>>& pointOfAllFace)
{
    Face* start = op->getAllSolids()[0]->sfaces ;

    if (start!= nullptr)
    {
        do{
            std::vector<std::vector<glm::vec3>> face ;
            getFace(start,face) ;
            start = start->nextf ;
            pointOfAllFace.push_back(face) ;
        }while(start!=op->getAllSolids()[0]->sfaces) ;
    }

}
