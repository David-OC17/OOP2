#include "paquete.h"

paquete::paquete(){
    peso = 0.0;
    largo = 0.0;
    ancho = 0.0;
    alto = 0.0;
    costo_por_kg = 0.0;
}

paquete::paquete(std::string nombre, std::string direccion, std::string ciudad, std::string estado, int cp_remitente, int cp_destinatario, double costo, float peso, float largo, float ancho, float alto, float costo_por_kg) : envio(nombre, direccion, ciudad, estado, cp_remitente, cp_destinatario, costo){
    this->peso = peso;
    this->largo = largo;
    this->ancho = ancho;
    this->alto = alto;
    this->costo_por_kg = costo_por_kg;
}

float paquete::calculaCosto(){
    return envio::calculaCosto() + (peso * costo_por_kg);
}