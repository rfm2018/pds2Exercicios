#include "math.h"
#include <iostream>
#include "../include/triangulo.h"

Triangulo::Triangulo(std::string _cor, double _lado1, double _lado2, double _lado3){

    this-> cor = _cor;
    this-> lado1 = _lado1;
    this-> lado2 = _lado2;
    this-> lado3 = _lado3;

}



double Triangulo::get_perimetro(){

    return lado1+lado2+lado3;

}

double Triangulo::get_area(){
    
    double perim2 = get_perimetro()/2;
    
    double heron = (perim2)*(perim2-lado1)*(perim2-lado2)*(perim2-lado3);
    
    return sqrt(heron);

}


std::string Triangulo::get_nome(){
    
    return "triangulo";
    
};
