#ifndef FORME_H
#define FORME_H

#include "point.h"

template <typename T, typename S>
class Forme;

template <typename T, typename S>
std::ostream& operator<<(std::ostream &, Forme<T, S> const&);

template <typename T, typename S>
class Forme
{
protected:
    Point<T> point_;
    
public:
    /*Constructeur*/
    Forme(Point<T> p);

    friend std::ostream& operator<< <T, S>(std::ostream &, Forme const&);
    virtual S perimetre()=0;
    virtual S surface()=0;
};

template<typename T, typename S>
Forme<T, S>::Forme(Point<T> p){
    this->point_ = p;
}

template <typename T, typename S>
std::ostream& operator<<(std::ostream &output, Forme<T, S> const &f)
{
    output << f.point_;
    return output;
}

#endif /*FORME_H*/