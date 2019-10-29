#include "math.h"
#include <iostream>
#include "../include/circulo.h"

Circulo::Circulo(std::string _cor, std::string _nome, double _raio){

    this-> cor = _cor;
    this-> nome = _nome; 
    this-> raio = _raio;
    
}



double Circulo::get_perimetro(){

    return 3.14*this->raio*2;

}

double Circulo::get_area(){
    
    return 3.14*pow(this->raio,2);

}