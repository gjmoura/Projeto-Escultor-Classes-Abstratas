#include <cmath>
#include <iostream>
#include <cstdlib>
#include <string>
#include "sculptor.h"
#include <math.h>
#include "interpretador.h"
#include <fstream>
#include <sstream>
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"

using namespace std;

int main(){
Sculptor *s1;

Interpretador parser;

std::vector<FiguraGeometrica*> figs;

figs = parser.parse("arqOFF.off");

s1 = new Sculptor(parser.getDimx(), parser.getDimy(), parser.getDimz());

for(size_t i=0; i<figs.size(); i++) {
    std::cout << "draw\n";
    figs[i]->draw(*s1);
}

//s1->limpaVoxels();

s1->writeOFF((char*)"arqOFF.off");

for(size_t i=0; i<figs.size(); i++) {
    delete figs[i];
}

delete s1;
return 0;

}
