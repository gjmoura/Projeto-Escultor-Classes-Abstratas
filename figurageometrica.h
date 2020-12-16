#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "sculptor.h"

class FiguraGeometrica
{
protected:
    float r,g,b,a;
public:
    FiguraGeometrica();

    virtual ~FiguraGeometrica(){};

    virtual void draw(Sculptor  &t)=0; //Método virtual puro
};

#endif // FIGURAGEOMETRICA_H
