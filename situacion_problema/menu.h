#ifndef MENU_H
#define MENU_H

#include "pelicula.h"
#include "serie.h"

void greeting();

void case1_peliculas(std::vector<Pelicula> peliculas);

void case1_series(std::vector<Serie> series);

void case2_peliculas(std::vector<Pelicula> peliculas);

void case2_series(std::vector<Serie> series);

void case1(std::vector<Pelicula> peliculas, std::vector<Serie> series);

void case2(std::vector<Pelicula> peliculas, std::vector<Serie> series);

bool menu(std::vector<Pelicula> peliculas, std::vector<Serie> series);

#endif // MENU_H