#include "terreno.h"

Terreno::Terreno() : Inmueble() {
    limpio = false;
    cercado = false;
    plano = false;
}

Terreno::Terreno(bool limpio, bool cercado, bool plano, bool servicios, float frente, float fondo, std::string ubicacion, float valor_catastral) : Inmueble(frente, fondo, ubicacion, valor_catastral) {
    this->limpio = limpio;
    this->cercado = cercado;
    this->plano = plano;
    this->servicios = servicios;
}

bool Terreno::getLimpio() const {
    return limpio;
}

bool Terreno::getCercado() const {
    return cercado;
}

bool Terreno::getPlano() const {
    return plano;
}

bool Terreno::getServicios() const {
    return servicios;
}

void Terreno::setLimpio(bool limpio) {
    this->limpio = limpio;
}

void Terreno::setCercado(bool cercado) {
    this->cercado = cercado;
}

void Terreno::setPlano(bool plano) {
    this->plano = plano;
}

void Terreno::setServicios(bool servicios) {
    this->servicios = servicios;
}

void Terreno::mostrarDatos() {
    std::cout << "------Terreno------" << std::endl;
    Inmueble::mostrarDatos();
    std::cout << "Limpio: " << (limpio ? "Si" : "No") << std::endl;
    std::cout << "Cercado: " << (cercado ? "Si" : "No") << std::endl;
    std::cout << "Plano: " << (plano ? "Si" : "No") << std::endl;
    std::cout << "Servicios: " << (servicios ? "Si" : "No") << std::endl;
    std::cout << std::endl;
}

void Terreno::precioVenta() {
    float precio;
    int aumento ;
    if(getServicios()){
        aumento = 40;
        precio = (getValorCatastral() * aumento) / (1 + aumento);
    }else{
        aumento = 20;
        precio = (getValorCatastral() * aumento) / (1 + aumento);
    };

    std::cout << "Precio de venta: " << precio << std::endl;
}