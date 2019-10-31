#ifndef CIRCULO_H
#define CIRCULO_H

#include "forma2d.h"

class Circulo : public Forma2D {
    public:

        double raio;

        Circulo (std::string _cor, double _raio);

        double get_area();

        double get_perimetro();
        
        std::string get_nome();


};

#endif
