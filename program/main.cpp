#include <iostream>
#include "../include/quadrado.h"
#include "../include/triangulo.h"
#include "../include/forma.h"
#include "../include/forma2d.h"



int main(){
    
    Quadrado quadradoTeste("azul", "azul", 4.5);

    std::cout << "o perimetro do quadrado é " << quadradoTeste.get_perimetro() << std::endl
              << "a área do quadrado é " << quadradoTeste.get_area() << std::endl;

    Triangulo trianguloTeste("azul", "azul", 24, 30, 18);

    std::cout << "o perimetro do triangulo é " << trianguloTeste.get_perimetro() << std::endl
              << "a área do triangulo é " << trianguloTeste.get_area() << std::endl;

    return 0;
}