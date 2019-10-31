#include "math.h"
#include <iostream>
#include "../include/circulo.h"

Circulo::Circulo(std::string _cor, double _raio){

    this-> cor = _cor;
    this-> raio = _raio;
    
}



double Circulo::get_perimetro(){

    return 3.141592*this->raio*2;

}

double Circulo::get_area(){
    
    return 3.141592*pow(this->raio,2);

}


std::string Circulo::get_nome(){
    
    return "circulo";
    
};
