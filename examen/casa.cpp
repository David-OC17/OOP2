#include "casa.h"

Casa::Casa() : Inmueble() {
    num_pisos = 0;
    num_habitaciones = 0;
    num_banos = 0;
    jardin = false;
    cochera = false;
}

Casa::Casa(int num_pisos, int num_habitaciones, int num_banos, bool jardin, bool cochera, bool en_privada, float frente, float fondo, std::string ubicacion, float valor_catastral) : Inmueble(frente, fondo, ubicacion, valor_catastral) {
    this->num_pisos = num_pisos;
    this->num_habitaciones = num_habitaciones;
    this->num_banos = num_banos;
    this->jardin = jardin;
    this->cochera = cochera;
    this->en_privada = en_privada;
}

int Casa::getNumPisos() const {
    return num_pisos;
}

int Casa::getNumHabitaciones() const {
    return num_habitaciones;
}

int Casa::getNumBanos() const {
    return num_banos;
}

bool Casa::getJardin() const {
    return jardin;
}

bool Casa::getCochera() const {
    return cochera;
}

bool Casa::getEnPrivada() const {
    return en_privada;
}

void Casa::setNumPisos(int num_pisos) {
    this->num_pisos = num_pisos;
}

void Casa::setNumHabitaciones(int num_habitaciones) {
    this->num_habitaciones = num_habitaciones;
}

void Casa::setNumBanos(int num_banos) {
    this->num_banos = num_banos;
}

void Casa::setJardin(bool jardin) {
    this->jardin = jardin;
}

void Casa::setCochera(bool cochera) {
    this->cochera = cochera;
}

void Casa::setEnPrivada(bool en_privada) {
    this->en_privada = en_privada;
}

void Casa::mostrarDatos() {
    std::cout << "------Casa------" << std::endl;
    Inmueble::mostrarDatos();
    std::cout << "Numero de pisos: " << num_pisos << std::endl;
    std::cout << "Numero de habitaciones: " << num_habitaciones << std::endl;
    std::cout << "Numero de baños: " << num_banos << std::endl;
    std::cout << "Jardin: " << (jardin ? "Si" : "No") << std::endl;
    std::cout << "Cochera: " << (cochera ? "Si" : "No") << std::endl;
    std::cout << "En privada: " << (en_privada ? "Si" : "No") << std::endl;
    std::cout << std::endl;
}

void Casa::precioVenta() {
    float precio;
    int aumento;
    if(getEnPrivada()){
        aumento = 120;
        precio = (getValorCatastral() * aumento) / (1 + aumento);
    }else{
        aumento = 80;
        precio = (getValorCatastral() * aumento) / (1 + aumento);
    }
    std::cout << "Precio de venta: " << precio << std::endl;
}