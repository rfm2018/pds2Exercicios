#ifndef QUADRADO_H
#define QUADRADO_H

#include "forma2d.h"

class Quadrado : public Forma2d {
    public:

        double lado;

        Quadrado (std::string _cor, std::string _nome, double _lado);

        double get_area();

        double get_perimetro();


};

#endif