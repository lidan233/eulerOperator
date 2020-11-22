//
// Created by lidan on 13/11/2020.
//

#include <iostream>
#include "operator.h"


HalfEdge::HalfEdge(Loop* lp){
    startV = nullptr ;
    nextV = nullptr ;
    next = nullptr ;
    edge = nullptr ;
    loop = lp ;

//    if(lp->getLbeginHalfEdge()== nullptr)
//    {
//        lp->setLbeginHalfEdge(this) ;
//    }
}


HalfEdge* HalfEdge::getTwin()
{
    if(this == edge->getUnClockEdge())
    {
        return edge->getClockEdge() ;
    }
    return edge->getUnClockEdge() ;
}


//MVSF 所有操作的开始 本项目用的到
Solid * Euler_operator::mvfs(Vec3d point)
{
    Solid* newSolid = new Solid ;
    Face* newFace = new Face(newSolid) ;
    Loop* newLoop = new Loop(newFace) ;
    Vertex *newVertex = new Vertex(point) ;

    newVertex->setId(vertex_list.size()) ;
    vertex_list.push_back(newVertex) ;
    num_V++ ;


    newSolid->sid = 0 ;
    newSolid->sfaces = newFace ;
    num_S++ ;

//    newLoop->setNext(newLoop) ;
    newLoop->setid(loop_list.size()) ;
    loop_list.push_back(newLoop) ;
    num_L++ ;

//    newFace->insert_inlp_list( newLoop) ;
//    newFace->nextf = newFace ;
    newFace->fid = face_list.size() ;
    face_list.push_back(newFace) ;
    num_F++ ;

    newSolid->vertex_num++ ;
    newSolid->face_num++ ;
    solid_list.push_back(newSolid) ;


    return newSolid ;
}

//MEV 用于建立二维结果 本项目用的到
HalfEdge* Euler_operator::mev(Vertex* start_v, Vec3d point, Loop* loop )
{
    Vertex* ev = new Vertex(point) ;
    ev->setId(vertex_list.size()) ;
    vertex_list.push_back(ev) ;
    num_V++ ;

    HalfEdge* lEdge = new HalfEdge(loop) ;
    HalfEdge* redge = new HalfEdge(loop) ;
    Edge* newEdge = new Edge(loop,lEdge,redge ) ;
    num_E++ ;

    redge->setStartV(start_v) ;
    redge->setEdge(newEdge) ;
    lEdge->setStartV(ev) ;
    lEdge->setEdge(newEdge) ;

    redge->setNext(lEdge) ;

    if(loop->getLbeginHalfEdge()== nullptr)
    {
        loop->setLbeginHalfEdge(redge) ;
        lEdge->setNext(redge) ;
    }else{
        // merge multiple loop
        HalfEdge* he = loop->getLbeginHalfEdge() ;
        while(he->getNext()->getStartV()!=start_v) he = he->getNext() ;
        lEdge->setNext(he->getNext()) ;
        he->setNext(redge) ;
    }

    Solid* s= loop->getLface()->fsolid ;
    if(s!= nullptr)
    {
        s->edge_num++ ;
        s->vertex_num++ ;
    }


    return redge;
}

//MEF 用于二维结构的封闭 本项目用的到 会产生一个新的loop
Loop* Euler_operator::mef(Vertex* start_v, Vertex* end_v, Loop* loop)
{
    Solid* s= loop->getLface()->fsolid ;
    s->edge_num++ ;
    s->face_num++ ;
    num_F++ ;
    num_E++ ;


    Face* newface = new Face(s) ;
    Loop* newLoop = new Loop(newface) ;
    HalfEdge* redge = new HalfEdge(loop) ;
    HalfEdge* ledge = new HalfEdge(newLoop) ;
    Edge* newEdge = new Edge(loop,redge,ledge) ;



    redge->setEdge(newEdge) ;
    ledge->setEdge(newEdge) ;
    redge->setStartV(start_v) ;
    ledge->setStartV(end_v) ;

    HalfEdge* he_from_sv = loop->getLbeginHalfEdge() ;
    HalfEdge* he_from_ev = loop->getLbeginHalfEdge() ;

    while(he_from_sv->getNext()->getStartV()!=start_v) he_from_sv=he_from_sv->getNext();
    while(he_from_ev->getNext()->getStartV()!=end_v) he_from_ev=he_from_ev->getNext();

    redge->setNext(he_from_ev->getNext());
    ledge->setNext(he_from_sv->getNext());

    he_from_sv->setNext(redge);
    he_from_ev->setNext(ledge) ;

    loop->setLbeginHalfEdge(redge);
    HalfEdge *he=redge->getNext();
    while(he!=redge)
    {
        he->setLoop(loop);
        he = he->getNext();
    }


    newLoop->setLbeginHalfEdge(ledge) ;
    he = ledge->getNext() ;
    while(he!=ledge)
    {
        he->setLoop(newLoop);
        he = he->getNext() ;
    }

    newLoop->setid(loop_list.size()) ;
    loop_list.push_back(newLoop) ;

    newface->outloop = newLoop ;
    newface->fid = face_list.size() ;
    face_list.push_back(newface) ;

    return newLoop ;

}

// 消除内环 mekl 用于消除一个环
Loop * Euler_operator::mekl(Loop *out, Loop* in, HalfEdge* redge)
{
    return nullptr ;
}

//MEKGFL 用于将两个物体合并为一个物体 本项目用不到
//Solid* Euler_operator::meksfl(Vertex* start_v, Vertex* end_v,Loop* start_loop , Loop* end_loop) = delete;


//MFKLG 用于填某一个孔洞 本项目用不到
//Loop* Euler_operator::mfklg(Face* end_f, Loop* mv_loop) = delete;

// kemr 用于一个物体，将内部的环和外部的环链接断掉 用于制造环
Loop* Euler_operator::keml(Vertex* v1, Vertex* v2, HalfEdge* redge)
{
    num_E-- ;
    num_L++ ;

    // 从面的边下手
    Edge *edge = redge->getEdge();
    Loop *lp= redge->getLoop();

    Face *face= lp->getLface();
    if(face== nullptr) std::cout<<"shit happend" ;
    Loop *inLoop=new Loop(face);

    // 找到内环中连续的两条边
    HalfEdge *to_start =lp->getLbeginHalfEdge();
    while(to_start->getNext()->getStartV()!=v1 || to_start->getEdge()==edge)
        to_start = to_start->getNext() ;

    HalfEdge* to_end = lp->getLbeginHalfEdge() ;
    while(to_end->getNext()->getStartV()!=v2 || to_end->getEdge()==edge)
        to_end = to_end->getNext() ;


//    to_start->setNext(edge->getClockEdge()->getNext()) ;
//    to_end->setNext(edge->getUnClockEdge()->getNext()) ;
    HalfEdge* tt1 = to_end->getNext()->getNext() ;
    HalfEdge* tt2 = to_start->getNext()->getNext() ;

    to_start->setNext(tt1) ;
    to_end->setNext(tt2) ;

    lp->setLbeginHalfEdge(to_start) ;

    if(to_end->getEdge() == edge)
        inLoop->setLbeginHalfEdge(nullptr) ;
    else
        inLoop->setLbeginHalfEdge(to_end) ;

    inLoop->setid( loop_list.size());
    loop_list.push_back(inLoop) ;

    delete edge ;
    return inLoop ;

}

// KFMLG 用于创建一个孔洞 本项目用的到
void Euler_operator::kfmlg(Face* out , Face* in_to_remove)
{
    num_F++ ;
    num_L++ ;
    num_G++ ;


    in_to_remove->in_loop = out->in_loop ;
    out->in_loop = in_to_remove->outloop ;
    Face* t = in_to_remove->fsolid->sfaces ;



    if(t==in_to_remove) in_to_remove->fsolid->sfaces = t->nextf ;
    else{
        while(t->nextf!=in_to_remove) t= t->nextf ;
        t->nextf = t->nextf->nextf ;
    }
    in_to_remove->fsolid->face_num-- ;

    for(auto i = face_list.begin() ; i!= face_list.end() ;i++)
    {
        if(*i==in_to_remove)
        {
            face_list.erase(i) ;
            delete in_to_remove ;
            break ;
        }
    }

    for(int i = 0; i<face_list.size();i++)
    {
        face_list[i]->fid = i ;
    }
}

inline
// use sweeping 操作
void Euler_operator::sweep(Face* face, Vec3d direction , int distance)
{
    Face* tface ;
    HalfEdge *first_he, *end_he, *first_new_R, *new_he_R ;
    Vertex *start_v, *next_v, *up_v, *up_pre_v ;
    Vertex up_point ;

    for(Loop* loop = face->outloop ;;)
    {
        first_he = loop->getLbeginHalfEdge()->getTwin() ;
        end_he = first_he->getNext() ;
        while(end_he->getNext()!=first_he) end_he = end_he->getNext() ;

        start_v = first_he->getStartV() ;
        up_point = (*start_v)+direction*distance ;
        first_new_R = mev(start_v,up_point.toVec(),first_he->getLoop()) ;

        HalfEdge* he = first_he->getNext() ;
        up_pre_v = first_new_R->getTwin()->getStartV() ;
        while(he!=first_new_R)
        {
            next_v = he->getStartV() ;
            up_point = next_v->toVec()+direction*distance  ;
            new_he_R = mev(next_v,up_point.toVec(),he->getLoop()) ;

            up_v = new_he_R->getTwin()->getStartV() ;
            mef(up_v, up_pre_v, he->getLoop()) ;
            up_pre_v = up_v ;

            he = he->getNext() ;
        }

        Loop *top_lp = mef(up_pre_v,first_new_R->getTwin()->getStartV(),end_he->getLoop()) ;
        if(loop==face->outloop)
        {
            tface = top_lp->getLface() ;
            loop = face->in_loop ;
        }else{
            kfmlg(tface,top_lp->getLface()) ;
            if(loop->getNext()!= nullptr)
                loop = loop->getNext() ;
        }
        if(loop == nullptr)
        {
            break ;
        }

    }
}