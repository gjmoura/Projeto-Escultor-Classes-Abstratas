#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include "figurageometrica.h"
#include <string>

/*! \brief Interpretador é uma classe que interpreta as esculturas para as classes.
*
*/
class Interpretador
{

    int dimx; /*!< O dado dimx do tipo int representa a dimensão x. */
    int dimy; /*!< O dado dimy do tipo int representa a dimensão y. */
    int dimz; /*!< O dado dimz do tipo int representa a dimensão z. */
    float r; /*!< O dado r do tipo float representa a cor vermelha. */
    float g; /*!< O dado g do tipo float representa a cor verde. */
    float b; /*!< O dado b do tipo float representa a cor blue. */
    float a;  /*!< O dado a do tipo float representa a transparência. */
public:
    /*!
     * /brief construtor da classe Interpretador
     */
    Interpretador();

        /*!
         * /brief parse é um tipo de método gabarito
         * /param filename é nome do arquivo em que será gravada a escultura
         */
    std::vector<FiguraGeometrica*> parse(std::string filename);

    /*! \brief Esse método retorna a dimensão x da matriz*/
    int getDimx();
    /*! \brief Esse método retorna a dimensão y da matriz*/
    int getDimy();
    /*! \brief Esse método retorna a dimensão z da matriz*/
    int getDimz();
};

#endif // INTERPRETADOR_H
