#include <iostream>
#include "../include/quadrado.h"
#include "../include/triangulo.h"
#include "../include/circulo.h"
#include "../include/cubo.h"
#include "../include/esfera.h"
#include "../include/forma.h"
#include "../include/forma2d.h"
#include "../include/forma3d.h"



int main(){
    
    Quadrado quadradoTeste("azul", "azul", 4.5);

    std::cout << "o perimetro do quadrado é " << quadradoTeste.get_perimetro() << std::endl
              << "a área do quadrado é " << quadradoTeste.get_area() << std::endl;

    Triangulo trianguloTeste("azul", "azul", 24, 30, 18);

    std::cout << "o perimetro do triangulo é " << trianguloTeste.get_perimetro() << std::endl
              << "a área do triangulo é " << trianguloTeste.get_area() << std::endl;
                  
    Circulo circuloTeste("azul", "azul", 4);

    std::cout << "o perimetro do circulo é " << circuloTeste.get_perimetro() << std::endl
              << "a área do circulo é " << circuloTeste.get_area() << std::endl;

    Cubo cuboTeste("azul", "azul", 4);

    std::cout << "o volume do cubo é " << cuboTeste.get_volume() << std::endl;

    Esfera esferaTeste("azul", "azul", 4);

    std::cout << "o volume da esfera é " << esferaTeste.get_volume() << std::endl;


    return 0;
}