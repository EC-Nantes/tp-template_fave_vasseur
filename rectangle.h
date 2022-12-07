#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "forme.h"

template <typename T, typename S>
class Rectangle;

template <typename T, typename S>
class Rectangle : public Forme<T, S>
{
protected:
    T largeur_;
    T hauteur_;

public:
    Rectangle(Point<T> p, T largeur, T hauteur);

    friend std::ostream& operator<< <T>(std::ostream &, Rectangle const&);
    S perimetre();
    S surface();
};

template<typename T, typename S>
Rectangle<T, S>::Rectangle(Point<T> p, T largeur, T hauteur){
    this->point_ = p;
    this->largeur_ = largeur;
    this->hauteur_ = hauteur;
}

template<typename T, typename S>
S Rectangle<T, S>::perimetre(){
    S per = (this->largeur_ * 2) + (this->hauteur_ * 2);
    return per;
}

template<typename T, typename S>
S Rectangle<T, S>::surface(){
    S sur = (this->largeur_ * this->hauteur_);
    return sur;
}

template <typename T, typename S>
std::ostream& operator<<(std::ostream &output, Rectangle<T, S> const &r)
{
    output << "Rectangle de centre " << r.point_ << ", largeur = " << r.largeur_ << " et hauteur = " << r.hauteur_ << std::endl;
    return output;
}

#endif /* RECTANGLE_H */