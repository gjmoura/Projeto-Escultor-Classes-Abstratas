#ifndef PUTBOX_H
#define PUTBOX_H

#include "figurageometrica.h"

/*! \brief PutBox é uma classe que desenha um paralelepípedo com um intervalo e cores definidas.
*
*/
class PutBox : public FiguraGeometrica
{

    int x0,x1,y0,y1,z0,z1,r,g,b,a;
public:
    /*! \param x0 é um dado de entrada que representa o intervalo inicial da posição x de um paralelepípedo.
    * \param x1 é um dado de entrada que representa o intervalo final da posição x de um paralelepípedo.
    * \param y0 é um dado de entrada que representa o intervalo inicial da posição y de um paralelepípedo.
    * \param y1 é um dado de entrada que representa o intervalo final da posição y de um paralelepípedo.
    * \param z0 é um dado de entrada que representa o intervalo inicial da posição z de um paralelepípedo.
    * \param z1 é um dado de entrada que representa o intervalo final da posição z de um paralelepípedo.
    * \param r é um dado de entrada que representa a cor vermelha.
    * \param g é um dado de entrada que representa a cor verde.
    * \param b é um dado de entrada que representa a cor azul.
    * \param a é um dado de entrada que representa a transparênica.
    */
    PutBox(int x0, int x1, int y0, int y1, int z0,int z1, float r, float g,float b, float a);

     /*! \brief Destrutor da classe*/
    ~PutBox(){};

    /*! \brief Ativa os cubos nas coordenadas fornecidas
    *   \param t é uma instãncia da classe Sculptor, usada na execução da classe
    */
    void draw(Sculptor  &t);
};

#endif // PUTBOX_H
