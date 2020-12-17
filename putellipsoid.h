#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include "figurageometrica.h"

/*! \brief PutEllipsoid é uma classe que desenha uma elipsóide com os raios e cores definidas.
*
*/
class PutEllipsoid : public FiguraGeometrica
{

    int xcenter,ycenter,zcenter,rx,ry,rz,r,g,b,a;
public:
    /*! \param xcenter é um dado de entrada que representa a posição x do centro da elipsóide.
    * \param ycenter é um dado de entrada que representa a posição y do centro da elipsóide.
    * \param zcenter é um dado de entrada que representa a posição z do centro da elipsóide.
    * \param rx é um dado de entrada que representa a posição x do raio específicado.
    * \param ry é um dado de entrada que representa a posição y do raio específicado.
    * \param rz é um dado de entrada que representa a posição z do raio específicado.
    * \param r é um dado de entrada que representa a cor vermelha.
    * \param g é um dado de entrada que representa a cor verde.
    * \param b é um dado de entrada que representa a cor azul.
    * \param a é um dado de entrada que representa a transparênica.
    */
    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz,float r,float g,float b,float a);

     /*! \brief Destrutor da classe*/
    ~PutEllipsoid(){};

    /*! \brief Ativa os cubos nas coordenadas fornecidas em forma de ellipse
    *   \param t é uma instãncia da classe Sculptor, usada na execução da classe
    */
    void draw(Sculptor  &t);
};

#endif // PUTELLIPSOID_H
