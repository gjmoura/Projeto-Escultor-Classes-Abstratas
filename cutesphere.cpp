#include "cutsphere.h"

CutSphere::CutSphere(int xcenter,int ycenter,int zcenter,int radius)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->radius = radius;
}

void CutSphere::draw(Sculptor &t) {
    for(int vetorX = 0; vetorX < t.getNx(); vetorX++) {
        for( int vetorY = 0; vetorY < t.getNy(); vetorY++) {
            for( int vetorZ = 0; vetorZ < t.getNz(); vetorZ++) {

               int value = (vetorX - xcenter)*(vetorX - xcenter) + (vetorY - ycenter)*(vetorY - ycenter) + (vetorZ - zcenter)*(vetorZ - zcenter);
                if( value <= (radius)*(radius) ) {
                     t.cutVoxel(vetorX,vetorY,vetorZ);
                }
            }
        }
    }
}
