#include "local.h"

Local::Local() : Inmueble() {
    seguridad = false;
    estacionamiento = false;
    almacenamiento = false;
}

Local::Local(bool seguridad, bool estacionamiento, bool almacenamiento, std::string tipo, float frente, float fondo, std::string ubicacion, float valor_catastral) : Inmueble(frente, fondo, ubicacion, valor_catastral) {
    this->seguridad = seguridad;
    this->estacionamiento = estacionamiento;
    this->almacenamiento = almacenamiento;
    this->tipo = tipo;
}

bool Local::getSeguridad() const {
    return seguridad;
}

bool Local::getEstacionamiento() const {
    return estacionamiento;
}

bool Local::getAlmacenamiento() const {
    return almacenamiento;
}

std::string Local::getTipo() const {
    return tipo;
}

void Local::setSeguridad(bool seguridad) {
    this->seguridad = seguridad;
}

void Local::setEstacionamiento(bool estacionamiento) {
    this->estacionamiento = estacionamiento;
}

void Local::setAlmacenamiento(bool almacenamiento) {
    this->almacenamiento = almacenamiento;
}

void Local::setTipo(std::string tipo) {
    this->tipo = tipo;
}

void Local::mostrarDatos() {
    std::cout << "------Local------" << std::endl;
    Inmueble::mostrarDatos();
    std::cout << "Seguridad: " << (seguridad ? "Si" : "No") << std::endl;
    std::cout << "Estacionamiento: " << (estacionamiento ? "Si" : "No") << std::endl;
    std::cout << "Almacenamiento: " << (almacenamiento ? "Si" : "No") << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << std::endl;
}

void Local::precioVenta() {
    float precio;
    int aumento;
    if(getTipo() == "Comercial"){
        aumento = 60;
        precio = (getValorCatastral() * aumento) / (1 + aumento);
    }else if(getTipo() == "Residencial"){
        aumento = 40;
        precio = (getValorCatastral() * aumento) / (1 + aumento);
    }
    std::cout << "Precio de venta: " << precio << std::endl;
}