#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "forma2d.h"

class Triangulo : public Forma2d {
    public:

        double lado1, lado2, lado3;

        Triangulo (std::string _cor, std::string _nome, double _lado1, double _lado2, double _lado3);

        double get_area();

        double get_perimetro();


};

#endif