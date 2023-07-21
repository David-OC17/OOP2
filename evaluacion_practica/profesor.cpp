#include "profesor.h"

Profesor::Profesor(std::string nombre, std::string nomina, std::string departamento) : Persona(nombre){
    this->nomina = nomina;
    this->departamento = departamento;
}

std::string Profesor::getNomina() const{
    return this->nomina;
}

std::string Profesor::getDepartamento() const{
    return this->departamento;
}

void Profesor::setNomina(std::string nomina){
    this->nomina = nomina;
}

void Profesor::setDepartamento(std::string departamento){
    this->departamento = departamento;
}

void Profesor::imprimir() const{
    std::cout << "Nombre: " << Persona::getNombre() << std::endl;
    std::cout << "Nomina: " << this->getNomina() << std::endl;
    std::cout << "Departamento: " << this->getDepartamento() << std::endl;
}