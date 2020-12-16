#include "putellipsoid.h"

PutEllipsoid::PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz,float r,float g,float b,float a)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void PutEllipsoid::draw(Sculptor &t) {
    for(int vetorX = 0; vetorX < t.getNx(); vetorX++) {
        for( int vetorY = 0; vetorY <  t.getNy(); vetorY++) {
            for( int vetorZ = 0; vetorZ <  t.getNz(); vetorZ++) {

                int value = ((vetorX - xcenter)*(vetorX - xcenter))/(rx*rx) + ((vetorY - ycenter)*(vetorY - ycenter))/(ry*ry) + ((vetorZ - zcenter)*(vetorZ - zcenter))/(rz*rz);
                if( value <= 1 ) {
                    t.putVoxel(vetorX,vetorY,vetorZ);
                }
            }
        }
    }
}
