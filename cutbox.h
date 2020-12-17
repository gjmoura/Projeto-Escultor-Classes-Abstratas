#ifndef CUTBOX_H
#define CUTBOX_H

#include "figurageometrica.h"
#include "sculptor.h"

/*! \brief Cutbox é uma classe que apaga um paralelepípedo delimitado por um intervalo.
*
*/
class CutBox : public FiguraGeometrica
{
    int x0,x1,y0, y1, z0, z1;
public:
    /*! \param x0 é um dado de entrada que representa o intervalo inicial da posição x.
    * \param x1 é um dado de entrada que representa o intervalo final da posição x.
    * \param y0 é um dado de entrada que representa o intervalo inicial da posição y.
    * \param y1 é um dado de entrada que representa o intervalo final da posição y.
    * \param z0 é um dado de entrada que representa o intervalo inicial da posição z.
    * \param z1 é um dado de entrada que representa o intervalo final da posição z.
    */
    CutBox(int x0, int x1, int y0, int y1, int z0,int z1);
    /*! \brief Destrutor da classe*/
    ~CutBox();
    /*! \brief Desativa os cubos das coordenadas fornecidas
    *   \param t é uma instãncia da classe Sculptor, usada na execução da classe
    */
    void draw(Sculptor  &t);
};

#endif // CUTBOX_H
