#include "carre.h"

void test_creationPoint()
{
    std::cout << " ~~~~~~" << __func__ << "~~~~~~" << std::endl;
    Point<float> pFloat(3.5, 7.5);
    Point<int>   pInt(5, 20);

    std::cout << "Point float : " << pFloat;
    std::cout << "Point int : " << pInt;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}

void test_translatePoint()
{
    std::cout << " ~~~~~~" << __func__ << "~~~~~~" << std::endl;
    Point<int> pInt(5, 20);
    std::cout << "Point avant translation : " << pInt;

    pInt.translater(5, 0);
    std::cout << "Point apres translation : " << pInt;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}

void test_rectangle()
{
    std::cout << " ~~~~~~" << __func__ << "~~~~~~" << std::endl;
    Point<int> pInt(5, 20);
    int largeur = 8;
    int hauteur = 10;

    Rectangle<int, int> rec(pInt, largeur, hauteur);
    std::cout << rec;

    std::cout << "Le perimetre est de " << rec.perimetre() << " et la surface de " << rec.surface() << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}

void test_carre()
{
    std::cout << " ~~~~~~" << __func__ << "~~~~~~" << std::endl;
    Point<int> pInt(5, 20);
    int cote = 10;

    Carre<int, int> car(pInt, cote);
    std::cout << car;

    std::cout << "Le perimetre est de " << car.perimetre() << " et la surface de " << car.surface() << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}

int main(int argc, char *argv[]){
    test_creationPoint();
    test_translatePoint();

    test_rectangle();
    test_carre();
    return 0;
}