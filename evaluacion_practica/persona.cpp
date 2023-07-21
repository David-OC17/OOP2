#include "persona.h"

Persona::Persona(std::string nombre){
    this->nombre = nombre;
}

std::string Persona::getNombre() const{
    return this->nombre;
}


void Persona::setNombre(std::string nombre){
    this->nombre = nombre;
}


void Persona::imprimir() const{
    std::cout << "Nombre: " << this->nombre << std::endl;
}