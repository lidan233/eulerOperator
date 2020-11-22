//
// Created by lidan on 13/11/2020.
//

#ifndef EULEROPERATOR_HALFEDGE_H
#define EULEROPERATOR_HALFEDGE_H


#include "vector_data.h"

namespace Data{
    struct Vertex ;
    struct HalfEdge ;
    struct Edge ;
    struct Loop ;
    struct Face ;
    struct Solid ;
    struct Scene ;



    struct Vertex {
    private:
        int vid;
        union {
            struct {
                double x, y, z ;
            };
            struct {
                double v[3] ;
            };
        };
        HalfEdge* edge ;

    public:
        Vertex():edge(nullptr){}
        Vertex(int i , int j ,int k):x(i),y(j),z(k),edge(nullptr){}
        Vertex(const Vertex& other):x(other.x),y(other.y),z(other.z),edge(nullptr){}
        Vertex(const Vec3d& other):x(other[0]),y(other[1]),z(other[2]),edge(nullptr){}

        double getX(){return x;}
        double getY(){return y;}
        double getZ(){return z;}

        double &operator[](int i){ return v[i] ;}
        Vertex operator+(const Vertex& ano) { return Vertex(x+ano.x,y+ano.y,z+ano.z) ;}
        Vertex operator+(const Vec3d& ano){return Vertex(x+ano[0],y+ano[1],z+ano[2]) ;}

        HalfEdge* getHalfEdge(){return edge;}
        void      setHalfEdge(HalfEdge* halfEdge) {edge = halfEdge;}

        int& getId() { return vid ;}
        void setId(int id){ vid = id ;}

        Vec3d toVec() { return Vec3d(x,y,z) ;}
    };

    struct HalfEdge{
    private:
        Vertex *startV;// start vertex and next vertex
        Vertex *nextV ; // 实际不需要 但我写上了
        HalfEdge* next ; // for next to transverse loop
        Edge* edge ; // for twin
        Loop* loop ;
    public:
        HalfEdge():startV(nullptr),
                   nextV(nullptr),
                   next(nullptr),
                   edge(nullptr),
                   loop(nullptr){}
        HalfEdge(Loop* lp) ;
        HalfEdge* getNext(){ return next ; }
        HalfEdge* getTwin() ;
        void  setNext(HalfEdge* next_) {next = next_ ;}
        Edge* getEdge(){ return edge; }
        void  setEdge(Edge* edge){ this->edge =  edge ;}
        Vertex* getStartV() {return startV; }
        void    setStartV(Vertex* start) { startV= start ;}
        Loop*  getLoop(){return loop ;}
        void   setLoop(Loop* loop_) { loop= loop_ ;}
    };

    struct Edge{
    private:
        // clockwise is clock's direction
        HalfEdge  *clockwise,*un_clockwise ;
        Loop* loop ;
    public:
        Edge():loop(nullptr),
               clockwise(nullptr),
               un_clockwise(nullptr){}
        Edge(Loop* loop_,HalfEdge* clock,HalfEdge* unclock):loop(loop_),
                                                            clockwise(clock),
                                                            un_clockwise(unclock){
        }
        HalfEdge* getClockEdge(){ return clockwise ;}
        HalfEdge* getUnClockEdge(){ return un_clockwise ; }
        Loop* getLoop(){ return loop ; }
        void  setLoop(Loop* lp){ loop = lp ;}
    };


    struct Loop{
    private:
        int nvertex_size ;
        int loop_id ; // use this to mark in loop or
        HalfEdge* lbegin ;
        Loop *prevl,*nextl ;
        Face *lface ;

    public:
        Loop():prevl(this),
               nextl(this),
               lface(nullptr),
               lbegin(nullptr){}

        Loop(Face* face) ;

        void  append(Loop* lp) ;
        void  reset_number() ;
        Loop* getNext() { return nextl; }
        void  setNext(Loop* l){ nextl = l; }
        void  setPrev(Loop* l){ prevl = l; }
        void  setid(int id){ loop_id= id; }
        int   getVertex_size() ;
        HalfEdge* getLbeginHalfEdge(void) { return  lbegin ;}
        void      setLbeginHalfEdge(HalfEdge* begin){ lbegin= begin ;}
        Face*     getLface(){ return lface ;}
        void      setLface(Face* face){lface = face ;}
    };

    struct Face{
    public:
        int fid ;
        int num_inloop ;
        Solid* fsolid ;
        Loop *in_loop,*outloop ;
        Face *prevf,*nextf ;


        Face():num_inloop(0),
               prevf(this),
               nextf(this),
               fsolid(nullptr),
               in_loop(nullptr),
               outloop(nullptr){}

        Face(Solid* s) ;
        void append(Face* f) ;
        void insert_inlp_list(Loop* lp) ;
    };

    struct Solid{
    public:
        int sid ;
        int vertex_num,edge_num,loop_num,hole_num,face_num ;
        Face* sfaces;
        Solid* prevs,*nexts ;

        Solid():sfaces(nullptr),
                prevs(this),
                nexts(this),
                vertex_num(0),
                edge_num(0),
                loop_num(0),
                hole_num(0) ,
                face_num(0){}

        void append(Solid* s) ;
    };

    struct Scene{
    public:
        Solid* solidlist ;
    };
}

#endif //EULEROPERATOR_HALFEDGE_H
