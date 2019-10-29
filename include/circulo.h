#ifndef CIRCULO_H
#define CIRCULO_H

#include "forma2d.h"

class Circulo : public Forma2d {
    public:

        double raio;

        Circulo (std::string _cor, std::string _nome, double _raio);

        double get_area();

        double get_perimetro();


};

#endif