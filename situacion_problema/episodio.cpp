#include "episodio.h"
#include <iostream>

Episodio::Episodio(){
    titulo = "N/A";
    temporada = "N/A";
}

Episodio::Episodio(std::string titulo, std::string temporada){
    this->titulo = titulo;
    this->temporada = temporada;
}

std::string Episodio::getTitulo(){
    return titulo;
}

std::string Episodio::getTemporada(){
    return temporada;
}

void Episodio::setTitulo(std::string titulo){
    this->titulo = titulo;
}

void Episodio::setTemporada(std::string temporada){
    this->temporada = temporada;
}

void Episodio::muestraDatos(){
    std::cout << "Titulo: " << titulo << std::endl;
    std::cout << "Temporada: " << temporada << std::endl;
}
