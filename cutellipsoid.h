#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "figurageometrica.h"

/*! \brief CutEllipsoid é uma classe que apaga uma elipsóide com com raios de centro e específicados.
*
*/
class CutEllipsoid : public FiguraGeometrica
{
    int xcenter, ycenter, zcenter, rx, ry, rz;
public:
    /*! \param xcenter é um dado de entrada que representa a posição x do centro da elipsóide.
    * \param ycenter é um dado de entrada que representa a posição y do centro da elipsóide.
    * \param zcenter é um dado de entrada que representa a posição z do centro da elipsóide.
    * \param rx é um dado de entrada que representa a posição x do raio específicado.
    * \param ry é um dado de entrada que representa a posição y do raio específicado.
    * \param rz é um dado de entrada que representa a posição z do raio específicado.
    */
    CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

    /*! \brief Destrutor da classe*/
    ~CutEllipsoid(){};

    /*! \brief Desativa os cubos nas coordenadas fornecidas de uma ellipse
    *   \param t é uma instãncia da classe Sculptor, usada na execução da classe
    */
    void draw(Sculptor  &t);
};

#endif // CUTELLIPSOID_H
