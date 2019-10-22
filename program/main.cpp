#include <iostream>
#include "../include/quadrado.h"
#include "../include/forma.h"
#include "../include/forma2d.h"
#include <string>



int main(){
    
    Quadrado quadradoTeste("azul", "azul", 4.5);

    std::cout << quadradoTeste.get_perimetro();

    
    std::cout << "Use o main para testar seu programa!" << std::endl;
    return 0;
}