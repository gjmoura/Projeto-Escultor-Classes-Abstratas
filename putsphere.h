#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "figurageometrica.h"

class PutSphere : public FiguraGeometrica
{

    int x,y,z,raio;
    float r,g,b,a;
public:
    PutSphere(int x, int y, int z, int raio, float r,float g,float b,float a);

    ~PutSphere(){};

    void draw(Sculptor  &t);
};

#endif // PUTSPHERE_H
