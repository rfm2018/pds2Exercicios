#ifndef CUBO_H
#define CUBO_H

#include "forma3d.h"

class Cubo : public Forma3d {
    public:

        double lado;

        Cubo (std::string _cor, std::string _nome, double _lado);

        double get_volume();


};

#endif