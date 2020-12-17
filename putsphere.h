#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "figurageometrica.h"

/*! \brief PutSphere é uma classe que desenha uma elipsóide com os raios e cores definidas.
*
*/
class PutSphere : public FiguraGeometrica
{

    int x,y,z,raio;
    float r,g,b,a;
public:
    /*! \param x é um dado de entrada que representa a posição x do centro da esfera.
    * \param y é um dado de entrada que representa a posição y do centro da esfera.
    * \param z é um dado de entrada que representa a posição z do centro da esfera.
    * \param raio é um dado de entrada que representa o raio específicado.
    * \param r é um dado de entrada que representa a cor vermelha.
    * \param g é um dado de entrada que representa a cor verde.
    * \param b é um dado de entrada que representa a cor azul.
    * \param a é um dado de entrada que representa a transparênica.
    */
    PutSphere(int x, int y, int z, int raio, float r,float g,float b,float a);

     /*! \brief Destrutor da classe*/
    ~PutSphere(){};

    /*! \brief Ativa os cubos nas coordenadas fornecidas em forma de esfera
    *   \param t é uma instãncia da classe Sculptor, usada na execução da classe
    */
    void draw(Sculptor  &t);
};

#endif // PUTSPHERE_H
