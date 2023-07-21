#ifndef GRUPO_H
#define GRUPO_H

#include <vector>
#include <iostream>

#include "persona.h"

class Grupo{
    private:
        std::vector<Persona*> personas;
    public:
        Grupo();
        
        Grupo operator+(Persona* persona);

        void imprimir() const;
};

#endif // GRUPO_H