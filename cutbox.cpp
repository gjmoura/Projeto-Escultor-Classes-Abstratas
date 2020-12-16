#include "cutbox.h"
#include <iostream>

CutBox::CutBox(int x0, int x1, int y0, int y1, int z0,int z1)
{
    this->x0 = x0;
    this->x1 = x1;
    this->y0 = y0;
    this->y1 = y1;
    this->z0 = z0;
    this->z1 = z1;

}

void CutBox::draw(Sculptor  &t) {
    for(int vetorX = x0; vetorX < x1; vetorX++) {
        for( int vetorY = y0; vetorY < y1; vetorY++) {
            for( int vetorZ = z0; vetorZ < z1; vetorZ++) {
                t.cutVoxel(vetorX,vetorY,vetorZ);
            }
        }
    }
}

CutBox::~CutBox(){
    std::cout  << "destrutor cutbox\n";
}
