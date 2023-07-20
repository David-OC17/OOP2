#include "pelicula.h"
#include <iostream>

Pelicula::Pelicula():Video(){
    director = "";
}

Pelicula::Pelicula(std::string name, std::string genre, int launch_year, int duration, std::string director, float grade) : Video("Pelicula", name, genre, launch_year, duration, grade){
    this->director = director;
}

std::string Pelicula::getDirector(){
    return director;
}

void Pelicula::setDirector(std::string director){
    this->director = director;
}

void Pelicula::muestraDatos(){
    std::cout << "Director: " << director << std::endl;
    Video::muestraDatos();
}
