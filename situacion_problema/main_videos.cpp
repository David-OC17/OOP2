//David Ortiz Cota A01637391
#include <iostream>
#include<vector>

#include "video.h"
#include "pelicula.h"
#include "serie.h"
#include "menu.h"

int main(){
    std::vector<Pelicula> peliculas;
    std::vector<Serie> series;

    peliculas.push_back(Pelicula("StarWars", "Fantasy", 2002, 179,"George Lucas"));
    peliculas.push_back(Pelicula("StarWars", "Fantasy", 2002, 179, "George Lucas"));

    series.push_back(Serie("Game of Thrones", "Fantasy", 2011, 60, 10, 1));
    series.push_back(Serie("Game of Thrones", "Fantasy", 2011, 60, 10, 1));

    menu(peliculas, series);

    return EXIT_SUCCESS;
}