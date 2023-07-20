#include "episodio.h"
#include <iostream>

Episodio::Episodio(){
    titulo = "N/A";
    temporada = 0;
    duracion = 0;
}

Episodio::Episodio(std::string titulo, int temporada, int duracion){
    this->titulo = titulo;
    this->temporada = temporada;
    this->duracion = duracion;
}

std::string Episodio::getTitulo(){
    return titulo;
}

int Episodio::getTemporada(){
    return temporada;
}

int Episodio::getDuracion(){
    return duracion;
}

void Episodio::setTitulo(std::string titulo){
    this->titulo = titulo;
}

void Episodio::setTemporada(int temporada){
    this->temporada = temporada;
}

void Episodio::setDuracion(int duracion){
    this->duracion = duracion;
}

void Episodio::muestraDatos(){
    std::cout << "  Title: " << titulo << std::endl;
    std::cout << "  Season: " << temporada << std::endl;
    std::cout << "  Duration: " << duracion << std::endl;
}
