#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>

class Persona{
    private:
        std::string nombre;
    public:
        Persona(std::string nombre);

        std::string getNombre() const;

        void setNombre(std::string nombre);

        virtual void imprimir() const;
};

#endif // PERSONA_H