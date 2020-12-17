#ifndef CUTVOXEL_H
#define CUTVOXEL_H

#include "figurageometrica.h"

/*! \brief CutVoxel é uma classe que apaga um Voxel na posição definida.
*
*/
class CutVoxel : public FiguraGeometrica
{
    /*! \param x é um dado de entrada que representa a posição x do Voxel.
    * \param y é um dado de entrada que representa a posição y do Voxel.
    * \param z é um dado de entrada que representa a posição z do Voxel.
    */
    int x,y,z;
public:
    CutVoxel(int x,int y,int z);

     /*! \brief Destrutor da classe*/
    ~CutVoxel(){};

    /*! \brief Desativa os cubos nas coordenadas fornecidas
    *   \param t é uma instãncia da classe Sculptor, usada na execução da classe
    */
    void draw(Sculptor  &t);
};

#endif // CUTVOXEL_H
