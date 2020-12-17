#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "figurageometrica.h"

/*! \brief CutSphere é uma classe que apaga uma esfera com raios de centro e específicados.
*
*/
class CutSphere : public FiguraGeometrica
{

    int xcenter,ycenter,zcenter,radius;
public:
    /*! \param xcenter é um dado de entrada que representa a posição x do centro da esfera.
    * \param ycenter é um dado de entrada que representa a posição y do centro da esfera.
    * \param zcenter é um dado de entrada que representa a posição z do centro da esfera.
    * \param radius é um dado de entrada que representa o raio específicado.
    */
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);

    /*! \brief Destrutor da classe*/
    ~CutSphere(){};

    /*! \brief Desativa os cubos nas coordenadas fornecidas de uma esfera
    *   \param t é uma instãncia da classe Sculptor, usada na execução da classe
    */
    void draw(Sculptor  &t);
};

#endif // CUTSPHERE_H
