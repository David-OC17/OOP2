#include "serie.h"
#include <iostream>

Serie::Serie():Video(){
    num_episodios = 0;
    num_temporadas = 0;
}

Serie::Serie(int num_episodios, int num_temporadas, std::string name, std::string genre, int launch_year, int duration):Video("Serie", name, genre, launch_year, duration){
    this->num_episodios = num_episodios;
    this->num_temporadas = num_temporadas;
}

int Serie::getNum_episodios(){
    return num_episodios;
}

int Serie::getNum_temporadas(){
    return num_temporadas;
}

void Serie::setNum_episodios(int num_episodios){
    this->num_episodios = num_episodios;
}

void Serie::setNum_temporadas(int num_temporadas){
    this->num_temporadas = num_temporadas;
}

void Serie::muestraDatos(){
    Video::muestraDatos();
    std::cout << "Num episodios: " << this-> num_episodios << std::endl;
    std::cout << "Num temporadas: " << this-> num_temporadas << std::endl;
}

