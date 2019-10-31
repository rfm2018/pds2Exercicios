

#include "../include/quadrado.h"

Quadrado::Quadrado(std::string _cor, double _lado){

    this-> cor = _cor;
    this-> lado = _lado;

}

double Quadrado::get_area(){
    
    return lado*lado;

}

double Quadrado::get_perimetro(){

    return lado*4;

}


std::string Quadrado::get_nome(){
    
    return "quadrado";
    
}