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
    
    Quadrado quadradoTeste("azul", 4.5);

    std::cout << "o perimetro do quadrado é " << quadradoTeste.get_perimetro() << std::endl
              << "a área do quadrado é " << quadradoTeste.get_area() << std::endl;

    Triangulo trianguloTeste( "azul", 24, 30, 18);

    std::cout << "o perimetro do triangulo é " << trianguloTeste.get_perimetro() << std::endl
              << "a área do triangulo é " << trianguloTeste.get_area() << std::endl;
                  
    Circulo circuloTeste( "azul", 4);

    std::cout << "o perimetro do circulo é " << circuloTeste.get_perimetro() << std::endl
              << "a área do circulo é " << circuloTeste.get_area() << std::endl;

    Cubo cuboTeste( "azul", 4);

    std::cout << "o volume do cubo é " << cuboTeste.get_volume() << std::endl;
    std::cout << "o nome do cubo é " << cuboTeste.get_nome() << std::endl;

    Esfera esferaTeste("azul", 3);

    std::cout << "o volume da esfera é " << esferaTeste.get_volume() << std::endl;
    
    
    Quadrado quadrado("vermelho", 7);
    Forma *poligono1 = &quadrado;
    std::cout << "o poligono é " << poligono1->get_nome() << std::endl;


    return 0;
}
