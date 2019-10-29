#ifndef ESFERA_H
#define ESFERA_H

#include "forma3d.h"

class Esfera : public Forma3d {
    public:

        double raio;

        Esfera (std::string _cor, std::string _nome, double _raio);

        double get_volume();


};

#endif