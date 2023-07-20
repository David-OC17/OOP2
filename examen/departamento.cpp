#include "departamento.h"

Departamento::Departamento() : Inmueble() {
    num_piso = 0;
    num_habitaciones = 0;
    num_banos = 0;
    amueblado = false;
    cochera = false;
    elevador = false;
}

Departamento::Departamento(int num_piso, int num_habitaciones, int num_banos, bool amueblado, bool cochera, bool elevador, float frente, float fondo, std::string ubicacion, float valor_catastral) : Inmueble(frente, fondo, ubicacion, valor_catastral) {
    this->num_piso = num_piso;
    this->num_habitaciones = num_habitaciones;
    this->num_banos = num_banos;
    this->amueblado = amueblado;
    this->cochera = cochera;
    this->elevador = elevador;
}

int Departamento::getNumPiso() const {
    return num_piso;
}

int Departamento::getNumHabitaciones() const {
    return num_habitaciones;
}

int Departamento::getNumBanos() const {
    return num_banos;
}

bool Departamento::getAmueblado() const {
    return amueblado;
}

bool Departamento::getCochera() const {
    return cochera;
}

bool Departamento::getElevador() const {
    return elevador;
}

void Departamento::setNumPiso(int num_piso) {
    this->num_piso = num_piso;
}

void Departamento::setNumHabitaciones(int num_habitaciones) {
    this->num_habitaciones = num_habitaciones;
}

void Departamento::setNumBanos(int num_banos) {
    this->num_banos = num_banos;
}

void Departamento::setAmueblado(bool amueblado) {
    this->amueblado = amueblado;
}

void Departamento::setCochera(bool cochera) {
    this->cochera = cochera;
}

void Departamento::setElevador(bool elevador) {
    this->elevador = elevador;
}

void Departamento::mostrarDatos() {
    std::cout << "------Departamento------" << std::endl;
    Inmueble::mostrarDatos();
    std::cout << "Piso: " << num_piso << std::endl;
    std::cout << "Habitaciones: " << num_habitaciones << std::endl;
    std::cout << "Banos: " << num_banos << std::endl;
    std::cout << "Amueblado: " << (amueblado ? "Si" : "No") << std::endl;
    std::cout << "Cochera: " << (cochera ? "Si" : "No") << std::endl;
    std::cout << "Elevador: " << (elevador ? "Si" : "No") << std::endl;
    std::cout << std::endl;
}

void Departamento::precioVenta() {
    float precio;
    int aumento ;
    if (getNumPiso() == 1) {
        aumento = 80;
        precio = (getValorCatastral() * aumento) / (1 + aumento);
    } else {
        aumento = 50;
        precio = (getValorCatastral() * aumento) / (1 + aumento);
    }
    std::cout << "Precio de venta: " << precio << std::endl;
    std::cout << std::endl;
}
