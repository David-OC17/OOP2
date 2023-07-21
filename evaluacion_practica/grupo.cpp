#include "grupo.h"

Grupo::Grupo(){
}

Grupo Grupo::operator+(Persona* persona){
    personas.push_back(persona);
    return *this;
}   

void Grupo::imprimir() const{
    std::cout << "------Grupo------" << std::endl;
    for (Persona* persona : personas){
        persona->imprimir();
        std::cout << std::endl;
    }
}