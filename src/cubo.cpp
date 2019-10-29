#include "math.h"
#include <iostream>
#include "../include/cubo.h"

Cubo::Cubo(std::string _cor, std::string _nome, double _lado){

    this-> cor = _cor;
    this-> nome = _nome; 
    this-> lado = _lado;
    
}



double Cubo::get_volume(){

    return pow(lado, 3);

}
