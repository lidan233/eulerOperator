//
// Created by lidan on 19/11/2020.
//

#include "Build.h"

inline void cout_vertex(Vertex* v)
{
    std::cout<<v->getX()<<" "<<v->getY()<<" "<<v->getZ()<<std::endl ;
}
void Build::BuildCubeWithGenus()
{
    Solid* begin = op->mvfs(Vec3d(0.0,0.0,0.0)) ;
    HalfEdge* outloop_1 = op->mev(op->getLastVertex(),Vec3d(1.0,0.0, 0.0),op->getLastLoop()) ;
    HalfEdge* outloop_2 = op->mev(op->getLastVertex(),Vec3d(1.0,1.0, 0.0),op->getLastLoop()) ;
    HalfEdge* outloop_3 = op->mev(op->getLastVertex(),Vec3d(0.0,1.0, 0.0),op->getLastLoop()) ;
    Loop* firstLoop = op->getLastLoop() ;

    write2objFile("C:\\Users\\lidan\\CLionProjects\\eulerOperator\\result_tmp\\0_solid") ;

    Loop* loop = op->mef(outloop_1->getStartV(),op->getLastVertex(),firstLoop) ;
    Face* lastout = op->getLastFace() ;


    write2objFile("C:\\Users\\lidan\\CLionProjects\\eulerOperator\\result_tmp\\1_solid") ;


    Vec3d dir = Vec3d(0.0,0.0,1.0)  ;
    std::stack<Vertex*> newVertexs ;
    Vertex* first = nullptr ;
    HalfEdge* t = loop->getLbeginHalfEdge() ;
    do{
        Vertex* startv = t->getStartV() ;
        Vec3d tv = startv->toVec()+dir ;


        HalfEdge* side_edge = op->mev(startv,tv,firstLoop) ;
        newVertexs.push(op->getLastVertex()) ;
        if(newVertexs.size()==1) first = op->getLastVertex() ;

        t = t->getNext() ;
    }while(t!=loop->getLbeginHalfEdge()) ;

    newVertexs.push(first) ;

    write2objFile("C:\\Users\\lidan\\CLionProjects\\eulerOperator\\result_tmp\\2_solid") ;

    int facecount = 0  ;
    while(newVertexs.size()>1)
    {
        Vertex* t = newVertexs.top() ;
        newVertexs.pop() ;
        op->mef(t,newVertexs.top(),firstLoop) ;
        write2objFile(("C:\\Users\\lidan\\CLionProjects\\eulerOperator\\result_tmp\\2_solid"+std::to_string(facecount++)).c_str()) ;
    }
    write2objFile("C:\\Users\\lidan\\CLionProjects\\eulerOperator\\result_tmp\\3_solid") ;

    Vertex* last = newVertexs.top();
    newVertexs.pop();

    // firstloop 最后会变成顶面的loop
    HalfEdge* to_inloop = op->mev(last,Vec3d(0.25,0.25, 1.0),firstLoop) ;
    HalfEdge* inloop1 = op->mev(op->getLastVertex(),Vec3d(0.75,0.25, 1.0),firstLoop) ;
    HalfEdge* inloop2 = op->mev(op->getLastVertex(),Vec3d(0.75,0.75,1.0),firstLoop) ;
    HalfEdge* inloop3 = op->mev(op->getLastVertex(),Vec3d(0.25,0.75,1.0),firstLoop) ;

    write2objFile("C:\\Users\\lidan\\CLionProjects\\eulerOperator\\result_tmp\\4_solid") ;


    std::cout<<to_inloop->getLoop()->getLface() ;
    Loop* newLoop_top = op->keml(last,inloop1->getStartV(),to_inloop) ;


    write2objFile("C:\\Users\\lidan\\CLionProjects\\eulerOperator\\result_tmp\\5_solid") ;

    Loop* inner_up_new = op->mef(op->getLastVertex(),inloop1->getStartV(),newLoop_top) ;
    Face* last_to_remove = op->getLastFace() ;

    write2objFile("C:\\Users\\lidan\\CLionProjects\\eulerOperator\\result_tmp\\6_solid") ;


    HalfEdge* t1 = inloop1 ;
    Vertex* tt1 = nullptr ;
    do{
        Vertex* startv = t1->getStartV() ;
        HalfEdge* inner_side_edge = op->mev(startv,startv->toVec()-dir,inner_up_new) ;
        newVertexs.push(op->getLastVertex()) ;
        if(newVertexs.size()==1)
        {
            tt1 = op->getLastVertex() ;
        }
        t1 = t1->getNext() ;
    }while(t1!=inloop1) ;
    newVertexs.push(tt1) ;

    write2objFile("C:\\Users\\lidan\\CLionProjects\\eulerOperator\\result_tmp\\7_solid") ;

    while(newVertexs.size()>1)
    {
        Vertex* t = newVertexs.top() ;
        newVertexs.pop() ;
        op->mef(t,newVertexs.top(),inner_up_new) ;
    }

    write2objFile("C:\\Users\\lidan\\CLionProjects\\eulerOperator\\result_tmp\\8_solid") ;

    Vertex* last1 = newVertexs.top();
    newVertexs.pop();

    op->kfmlg(lastout,last_to_remove) ;
    write2objFile("C:\\Users\\lidan\\CLionProjects\\eulerOperator\\result_tmp\\9_solid") ;

}

void Build::write2objFile(const char* filename)
{
    std::ofstream out(filename) ;
    writer->writeAll(out) ;
    out.close() ;
}
void Build::write2vector(std::vector<std::vector<std::vector<glm::vec3>>>& pointOfAllFace)
{
    writer->getALL(pointOfAllFace) ;
}