#ifndef CARRE_H
#define CARRE_H

#include "rectangle.h"

template <typename T, typename S>
class Carre;

template <typename T, typename S>
std::ostream& operator<<(std::ostream &, Carre<T, S> const&);

template <typename T, typename S>
class Carre : public Rectangle<T, S>
{
protected:

public:
    Carre(Point<T> p, T cote);

    friend std::ostream& operator<< <T, S>(std::ostream &, Carre const&);
};

template<typename T, typename S>
Carre<T, S>::Carre(Point<T> p, T cote):Rectangle<T, S>(p, cote, cote){}

template <typename T, typename S>
std::ostream& operator<<(std::ostream &output, Carre<T, S> const &c)
{
    output << "Carre de centre " << c.point_ << "De cote = " << c.largeur_ << std::endl;
    return output;
}

#endif /* CARRE_H */