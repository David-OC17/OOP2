#include "envio.h"

envio::envio(){
    nombre = "";
    direccion = "";
    ciudad = "";
    estado = "";
    cp_remitente = 0;
    cp_destinatario = 0;
    costo = 0.0;
}

envio::envio(std::string nombre, std::string direccion, std::string ciudad, std::string estado, int cp_remitente, int cp_destinatario, double costo){
    this->nombre = nombre;
    this->direccion = direccion;
    this->ciudad = ciudad;
    this->estado = estado;
    this->cp_remitente = cp_remitente;
    this->cp_destinatario = cp_destinatario;
    this->costo = costo;
}

float envio::calculaCosto(){
    return costo;
}

void envio::setNombre(std::string nombre){
    this->nombre = nombre;
}

std::string envio::getNombre(){
    return nombre;
}

void envio::setDireccion(std::string direccion){
    this->direccion = direccion;
}

std::string envio::getDireccion(){
    return direccion;
}

void envio::setCiudad(std::string ciudad){
    this->ciudad = ciudad;
}

std::string envio::getCiudad(){
    return ciudad;
}

void envio::setEstado(std::string estado){
    this->estado = estado;
}

std::string envio::getEstado(){
    return estado;
}

void envio::setCpRemitente(int cp_remitente){
    this->cp_remitente = cp_remitente;
}

int envio::getCpRemitente(){
    return cp_remitente;
}

void envio::setCpDestinatario(int cp_destinatario){
    this->cp_destinatario = cp_destinatario;
}

int envio::getCpDestinatario(){
    return cp_destinatario;
}

void envio::setCosto(double costo){
    this->costo = costo;
}

double envio::getCosto(){
    return costo;
}

