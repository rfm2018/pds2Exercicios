#include "math.h"
#include <iostream>
#include "../include/esfera.h"

Esfera::Esfera(std::string _cor, std::string _nome, double _raio){

    this-> cor = _cor;
    this-> nome = _nome; 
    this-> raio = _raio;
    
}



double Esfera::get_volume(){

    return 3.14*(4/3)*pow(this->raio, 3);

}
