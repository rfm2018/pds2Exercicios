#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "forma2d.h"

class Triangulo : public Forma2D {
    public:

        double lado1, lado2, lado3;

        Triangulo (std::string _cor, double _lado1, double _lado2, double _lado3);

        double get_area();

        double get_perimetro();
        
        std::string get_nome();


};

#endif
