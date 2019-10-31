#ifndef ESFERA_H
#define ESFERA_H

#include "forma3d.h"

class Esfera : public Forma3D {
    public:

        double raio;

        Esfera (std::string _cor, double _raio);

        double get_volume();

        std::string get_nome();

};

#endif
