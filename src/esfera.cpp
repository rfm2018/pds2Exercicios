#include "math.h"
#include <iostream>
#include "../include/esfera.h"

Esfera::Esfera(std::string _cor, double _raio){

    this-> cor = _cor;
    this-> raio = _raio;
    
}



double Esfera::get_volume(){

    return 3.141592*(1.33333)*pow(this->raio, 3);

}


std::string Esfera::get_nome(){
    
    return "esfera";
    
};
