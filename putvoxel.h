#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "figurageometrica.h"
#include "sculptor.h"

/*! \brief PutVoxel é uma classe que desenha um voxel com as posições e cores definidas.
*
*/
class PutVoxel : public FiguraGeometrica
{
    int x,y,z;
public:
    /*! \param x é um dado de entrada que representa a posição x do Voxel.
    * \param y é um dado de entrada que representa a posição y do Voxel.
    * \param z é um dado de entrada que representa a posição z do Voxel.
    * \param r é um dado de entrada que representa a cor vermelha.
    * \param g é um dado de entrada que representa a cor verde.
    * \param b é um dado de entrada que representa a cor azul.
    * \param a é um dado de entrada que representa a transparênica.
    */
    PutVoxel(int x, int y, int z, float r, float g,float b, float a);

     /*! \brief Destrutor da classe*/
    ~PutVoxel(){}

    /*! \brief Ativa o cubo na coordenada fornecida
    *   \param t é uma instãncia da classe Sculptor, usada na execução da classe
    */
    void draw(Sculptor  &t);
};

#endif // PUTVOXEL_H
