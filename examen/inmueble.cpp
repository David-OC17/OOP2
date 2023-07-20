#include "inmueble.h"

Inmueble::Inmueble() {
    frente = 0;
    fondo = 0;
    ubicacion = "";
    valor_catastral = 0;
}

Inmueble::Inmueble(float frente, float fondo, std::string ubicacion, float valor_catastral) {
    this->frente = frente;
    this->fondo = fondo;
    this->ubicacion = ubicacion;
    this->valor_catastral = valor_catastral;
}

float Inmueble::getFrente() const {
    return frente;
}

float Inmueble::getFondo() const {
    return fondo;
}

std::string Inmueble::getUbicacion() const {
    return ubicacion;
}

float Inmueble::getValorCatastral() const {
    return valor_catastral;
}

void Inmueble::setFrente(float frente) {
    this->frente = frente;
}

void Inmueble::setFondo(float fondo) {
    this->fondo = fondo;
}

void Inmueble::setUbicacion(std::string ubicacion) {
    this->ubicacion = ubicacion;
}

void Inmueble::setValorCatastral(float valor_catastral) {
    this->valor_catastral = valor_catastral;
}

float Inmueble::calcularArea() {
    return frente * fondo;
}

float Inmueble::calcularValorMetroCuadrado() {
    return valor_catastral / calcularArea();
}

void Inmueble::mostrarDatos() {
    std::cout << "Frente: " << frente << std::endl;
    std::cout << "Fondo: " << fondo << std::endl;
    std::cout << "Ubicacion: " << ubicacion << std::endl;
    std::cout << "Valor Catastral: " << valor_catastral << std::endl;
}

void Inmueble::precioVenta() {
    std::cout << "Precio de venta: " << valor_catastral << std::endl;
}