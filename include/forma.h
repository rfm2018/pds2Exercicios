#ifndef FORMA_H
#define FORMA_H


#include <string>

class Forma {
    public:
        std::string cor;
        
        
        std::string get_cor(){
          
            return this-> cor;

        };
        virtual std::string get_nome(){
            
            return "";
            
        };

        };

#endif
