#ifndef FORMA_H
#define FORMA_H

#include <string>

class Forma {
    public:
        std::string cor;
        std::string nome;
        std::string get_cor(){
          
            return this-> cor;

        };
        std::string get_nome(){

            return this-> nome;

        };

};

#endif