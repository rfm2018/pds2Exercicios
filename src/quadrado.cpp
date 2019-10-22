

#include "../include/quadrado.h"

Quadrado::Quadrado(std::string _cor, std::string _nome, double _lado){

    this-> cor = _cor;
    this-> nome = _nome; 
    this-> lado = _lado;

}

double Quadrado::get_area(){
    
    return lado*lado;

}

double Quadrado::get_perimetro(){

    return lado*4;

}