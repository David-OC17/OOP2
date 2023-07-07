#include "sobre.h"

sobre::sobre(){
    largo = 0.0;
    ancho = 0.0;
    costo_por_kg = 0.0;
}

sobre::sobre(std::string nombre, std::string direccion, std::string ciudad, std::string estado, int cp_remitente, int cp_destinatario, double costo, float largo, float ancho, float costo_por_kg) : envio(nombre, direccion, ciudad, estado, cp_remitente, cp_destinatario, costo){
    this->largo = largo;
    this->ancho = ancho;
    this->costo_por_kg = costo_por_kg;
}

float sobre::calculaCosto(){
    if (largo > 25.0 || ancho > 30.0){
        return (envio::calculaCosto() + (largo * ancho * costo_por_kg))*1.10;
    }
    else{
        return envio::calculaCosto() + (largo * ancho * costo_por_kg);
    }
}