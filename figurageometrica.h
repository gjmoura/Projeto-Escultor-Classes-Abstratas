#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "sculptor.h"

/*! \brief FiguraGeometrica é uma classe abstrata que representa as esculturas, trata e gera o desenho conforme os códigos utilizados nas outras classes
*
*/
class FiguraGeometrica
{
protected:
    float r; /*!< O dado r do tipo float representa a cor vermelha. */
    float g; /*!< O dado g do tipo float representa a cor verde. */
    float b; /*!< O dado b do tipo float representa a cor blue. */
    float a;  /*!< O dado a do tipo float representa a transparência. */
public:
    /*!
     * /brief construtor da classe FiguraGeometrica
     */
    FiguraGeometrica();
    /*!
     * /brief destrutor da classe FiguraGeometrica
     */
    virtual ~FiguraGeometrica(){};

    /*! \brief Método virtual puro
    *   \param t é uma instãncia da classe Sculptor, usada na execução da classe
    */
    virtual void draw(Sculptor  &t)=0;
};

#endif // FIGURAGEOMETRICA_H
