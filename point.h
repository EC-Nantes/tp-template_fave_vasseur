#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Point;

template <typename T>
std::ostream& operator<<(std::ostream &, Point<T> const&);

template <typename T>
class Point
{
protected:
    T   abscisse_;
    T   ordonnee_;
    
public:
    /*Constructeur*/
    Point(T abscisse=0, T ordonnee=0);
    Point(Point<T> const &p);

    /*Accesseurs et mutateurs*/
    T getAbscisse() const;
    T getOrdonnee() const;

    void setAbscisse(T abscisse);
    void setOrdonnee(T ordonnee);
    
    /*methodes*/
    void translater(T x, T y);
    friend std::ostream& operator<< <T>(std::ostream &, Point const&);
};

template<typename T>
Point<T>::Point(T abscisse, T ordonnee){
    this->abscisse_ = abscisse;
    this->ordonnee_ = ordonnee;
}

template<typename T>
Point<T>::Point(Point<T> const &p){
    this->abscisse_ = p.abscisse_;
    this->ordonnee_ = p.ordonnee_;
}

template<typename T> T Point<T>::getAbscisse() const{return this->abscisse_;}
template<typename T> T Point<T>::getOrdonnee() const{return this->ordonnee_;}
template<typename T> void Point<T>::setAbscisse(T abscisse) {this->abscisse_ = abscisse;}
template<typename T> void Point<T>::setOrdonnee(T ordonnee) {this->ordonnee_ = ordonnee;}

template<typename T> void Point<T>::translater(T x, T y){
    this->abscisse_ += x;
    this->ordonnee_ += y;
}

template<> void Point<string>::translater(string x, string y){
    swap(this->abscisse_, x);
    swap(this->ordonnee_, y);
}

template <typename T>
std::ostream& operator<<(std::ostream &output, Point<T> const &p)
{
    output << "(" << p.getAbscisse() << ";" << p.getOrdonnee() << ") " << std::endl;
    return output;
}

#endif /*POINT_H*/
