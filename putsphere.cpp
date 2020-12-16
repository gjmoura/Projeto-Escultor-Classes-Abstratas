#include "putsphere.h"

PutSphere::PutSphere(int x, int y, int z, int raio, float r,float g,float b,float a)
{
    this->x = x;
    this->y = y;
    this->z = z;
    this->raio = raio;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;

}

void PutSphere::draw(Sculptor &t) {
    for(int vetorX = 0; vetorX < t.getNx(); vetorX++) {
        for( int vetorY = 0; vetorY < t.getNy(); vetorY++) {
            for( int vetorZ = 0; vetorZ < t.getNz(); vetorZ++) {

               int value = (vetorX - x)*(vetorX - x) + (vetorY - y)*(vetorY - y) + (vetorZ - z)*(vetorZ - z);
                if( value <= (raio)*(raio) ) {
                     t.putVoxel(vetorX,vetorY,vetorZ);
                }
            }
        }
    }
}
