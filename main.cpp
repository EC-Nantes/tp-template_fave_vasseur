#include "rectangle.h"

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
    std::cout << "Point après translation : " << pInt;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}

void test_rectangle()
{
    std::cout << " ~~~~~~" << __func__ << "~~~~~~" << std::endl;
    Point<int> pInt(5, 20);
    int largeur = 10;
    int hauteur = 10;

    Rectangle<int, int> rec(pInt, largeur, hauteur);
    std::cout << rec;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}

int main(int argc, char *argv[]){
    test_creationPoint();
    test_translatePoint();

    test_rectangle();
    return 0;
}