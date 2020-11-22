//
// Created by lidan on 13/11/2020.
//

#ifndef EULEROPERATOR_OPERATOR_H
#define EULEROPERATOR_OPERATOR_H

#include <vector>

#include "vector_data.h"
#include "halfEdge.h"

using namespace Data;

class Euler_operator {
private:
    std::vector<Solid*> solid_list ;
    std::vector<Face*> face_list ;
    std::vector<Loop*> loop_list ;
    std::vector<Vertex*> vertex_list ;
    unsigned int num_V, num_E, num_F, num_L, num_S, num_G ;

public:

    // V E F  L 2*(S-G)
    // V vertex E edge F face
    // L inner loop
    // S solid
    // G genus
    enum Operator{
        MVFS , // make vertex face solid 用于实体的开始的第一个点
        MVE ,// make vertex edge 用于创建新的点并形成线段
        MEF , // make edge face 用于封闭某一个图形
        MEKL , // make edge kill loop 用于消除内环,将其和外环链接起来
        MEKGFL , // make edge kill genus face loop 用于将两个实体链接起来，通过删除其中一个实体同时伴随着删除loop 删除face
        MFKLG , // make face kill loop genus 用于去孔
        KEMR , // kill edge make ring 用于建立内环
        KFMLG ,// kill face make ring and genus 用于建立孔
    };
    Euler_operator()
    {
        solid_list.clear() ;
        face_list.clear() ;
        loop_list.clear() ;
        vertex_list.clear() ;
    }




    //MVSF 所有操作的开始 本项目用的到
    Solid *mvfs(Vec3d point) ;

    //MEV 用于建立二维结果 本项目用的到
    HalfEdge *mev(Vertex* start_v, Vec3d point, Loop* loop ) ;

    //MEF 用于二维结构的封闭 本项目用的到
    Loop* mef(Vertex* start_v, Vertex* end_v, Loop* loop) ;

    // 消除内环 mekl 用于消除一个环 本项目用不到
    Loop *mekl(Loop *out, Loop* in, HalfEdge* redge) ;

    //MEKGFL 用于将两个物体合并为一个物体 本项目用不到
    Solid* meksfl(Vertex* start_v, Vertex* end_v,Loop* start_loop , Loop* end_loop) = delete;


    //MFKLG 用于填某一个孔洞 本项目用不到
    Loop* mfklg(Face* end_f, Loop* mv_loop) = delete;

    // kemr 用于一个物体，将内部的环和外部的环链接断掉 用于制造环 可以用到
    Loop* keml(Vertex* v1, Vertex* v2, HalfEdge* redge) ;

    // KFMLG 用于创建一个孔洞 本项目用的到
    void kfmlg(Face* out , Face* in_to_remove) ;

    // use sweeping 操作
    void sweep(Face* face, Vec3d direction , int distance) ;

    Vertex* getLastVertex() { return vertex_list[vertex_list.size()-1] ; }
    Face*   getLastFace()   { return face_list[face_list.size()-1] ; }
    Loop*   getLastLoop()   { return loop_list[loop_list.size()-1] ; }
    Solid* getLastSolid()   { return solid_list[solid_list.size()-1] ; }
    std::vector<Solid*>&  getAllSolids(){ return solid_list;}
};


#endif //EULEROPERATOR_OPERATOR_H
