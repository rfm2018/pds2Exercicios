#ifndef QUADRADO_H
#define QUADRADO_H

#include "forma2d.h"

class Quadrado : public Forma2D {
    public:

        double lado;

        Quadrado (std::string _cor, double _lado);

        double get_area();

        double get_perimetro();
        
        std::string get_nome();


};

#endif
