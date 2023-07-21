#include "estudiante.h"

Estudiante::Estudiante(std::string nombre, std::string carrera, std::string matricula) : Persona(nombre){
    this->carrera = carrera;
    this->matricula = matricula;
}

std::string Estudiante::getCarrera() const{
    return this->carrera;
}

std::string Estudiante::getMatricula() const{
    return this->matricula;
}

void Estudiante::setCarrera(std::string carrera){
    this->carrera = carrera;
}

void Estudiante::setMatricula(std::string matricula){
    this->matricula = matricula;
}

void Estudiante::imprimir() const{
    std::cout << "Nombre: " << Persona::getNombre() << std::endl;
    std::cout << "Carrera: " << this->getCarrera() << std::endl;
    std::cout << "Matricula: " << this->getMatricula() << std::endl;
}