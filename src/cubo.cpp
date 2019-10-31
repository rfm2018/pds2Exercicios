#include "math.h"
#include <iostream>
#include "../include/cubo.h"

Cubo::Cubo(std::string _cor, double _lado){

    this-> cor = _cor;
    this-> lado = _lado;
    
}



double Cubo::get_volume(){

    return pow(lado, 3);

}

std::string Cubo::get_nome(){
    
    return "cubo";
    
};
