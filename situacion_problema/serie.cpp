#include "serie.h"
#include <iostream>

Serie::Serie():Video(){
    num_episodios = 0;
    num_temporadas = 0;
    episodios = {}; //Vector of episodes of the series
}

Serie::Serie(std::string name, std::string genre, int launch_year, int num_episodios, int num_temporadas, float grade):Video("Serie", name, genre, launch_year, 0, grade){
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

void Serie::setEpisodios(std::vector<Episodio> episodios){
    this->episodios = episodios;
}

void Serie::muestraDatos(){
    Video::muestraDatos();
    std::cout << "Num episodios: " << this-> num_episodios << std::endl;
    std::cout << "Num temporadas: " << this-> num_temporadas << std::endl;
    //Show the episodes of the series
    for(int i = 0; i < episodios.size(); i++){
        episodios[i].muestraDatos();
    }
}

void Serie::muestraEpisodios(){
    for(int i = 0; i < episodios.size(); i++){
        episodios[i].muestraDatos();
    }
}
