#ifndef MENU_H
#define MENU_H

#include "pelicula.h"
#include "serie.h"

void greeting();

void print_options(std::vector<std::string> &names);

void case1_peliculas(std::vector<Pelicula> &peliculas); //Shows the info of all the movies

void case1_series(std::vector<Serie> &series); //Shows the info of all the series

void case1_both(std::vector<Pelicula> &peliculas, std::vector<Serie> &series); //Shows the info of all the movies and series

void case2_peliculas(std::vector<Pelicula> &peliculas, std::vector<std::string> &peliculas_names); //Grades a movie

void case2_series(std::vector<Serie> &series, std::vector<std::string> &series_names); //Grades a serie

void case1(std::vector<Pelicula> &peliculas, std::vector<Serie> &series, std::vector<std::string> &peliculas_names, std::vector<std::string> &series_names);

void case2(std::vector<Pelicula> &peliculas, std::vector<Serie> &series, std::vector<std::string> &peliculas_names, std::vector<std::string> &series_names);

bool menu(std::vector<Pelicula> &peliculas, std::vector<Serie> &series, std::vector<std::string> &peliculas_names, std::vector<std::string> &series_names);

#endif // MENU_H