#ifndef PONTO_H
#define PONTO_H

#include <iostream>
using namespace std;

class Ponto
{
private:

    int x;
    int y;

public:

    Ponto();
    Ponto(int x, int y);

    ~Ponto();

    int getX();
    int getY();

    void setX();
    void setY();

    void translacao(int dx, int dy);
    void escala(int sx, int sy);
    void rotacao(int angulo);
};

#endif // PONTO_H
