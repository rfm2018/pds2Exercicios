#ifndef CUBO_H
#define CUBO_H

#include "forma3d.h"

class Cubo : public Forma3D {
    public:

        double lado;

        Cubo (std::string _cor, double _lado);

        double get_volume();
        
        std::string get_nome();


};

#endif
