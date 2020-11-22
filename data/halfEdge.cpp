//
// Created by lidan on 13/11/2020.
//

#include "halfEdge.h"

namespace Data{
    void Solid::append(Solid *s) {
        s->prevs = this ;
        s->nexts = nexts ;
        s->nexts->prevs = s ;
        nexts = s ;
    }

    Face::Face(Solid* s)
    {
        num_inloop = 0 ;
        prevf = this ;
        nextf = this ;
        fsolid = s ;
        in_loop = nullptr ;
        outloop = nullptr ;

        if(fsolid->sfaces == nullptr )
        {
            fsolid->sfaces = this ;
        }else{
            nextf = fsolid->sfaces ;
            prevf = fsolid->sfaces->prevf ;
            fsolid->sfaces->prevf = this ;
            prevf->nextf = this  ;

            fsolid->sfaces = this ;

        }
    }

    void Face::append(Face *f) {
        f->prevf = this ;
        f->nextf = nextf ;
        f->nextf->prevf = f;
        nextf = f ;
    }

    void Face::insert_inlp_list(Loop *lp) {
        if(in_loop == nullptr)
        {
            in_loop = lp ;
            (*outloop).append(lp) ;
        }else{
            (*in_loop).append(lp);
        }
    }


    Loop::Loop(Face* face){
        prevl = this ;
        nextl = this ;
        lface = face ;
        lbegin = nullptr ;

        if(lface->outloop == nullptr)
        {
            lface->outloop = this ;
        }else{
            if(lface->in_loop == nullptr)
            {
                lface->in_loop = this ;
            }else{
                this->prevl = lface->in_loop->prevl ;
                this->prevl->nextl = this ;
                this->nextl = lface->in_loop ;
                lface->in_loop->prevl = this ;

                lface->in_loop = this ;
            }
        }
    }


    void Loop::append(Loop *lp) {
        lp->prevl = this ;
        lp->nextl = nextl ;
        lp->nextl->prevl = lp ;
        nextl = lp ;
    }

    void Loop::reset_number() {
        HalfEdge *edge = lbegin ;
        int n = 0 ;
        do{
            ++n ;
            edge = edge->getNext() ;
        }while(edge!=lbegin) ;
        this->nvertex_size = n ;
    }

    int Loop::getVertex_size() {
        reset_number() ;
        return this->nvertex_size ;
    }
}