//David Ortiz Cota A01637391
#include <iostream>
#include<vector>

#include "video.h"
#include "pelicula.h"
#include "serie.h"
#include "menu.h"
#include "database_reader.h"


int main(){
    /*
    peliculas.push_back(Pelicula("StarWars", "Fantasy", 2002, 179,"George Lucas"));
    peliculas.push_back(Pelicula("StarWars", "Fantasy", 2002, 179, "George Lucas"));

    series.push_back(Serie("Game of Thrones", "Fantasy", 2011, 60, 10, 1));
    series.push_back(Serie("Game of Thrones", "Fantasy", 2011, 60, 10, 1));
    */
    peliculas_series database = database_reader();

    menu(database.peliculas, database.series);

    return EXIT_SUCCESS;
}

//Missing:
//- Pass the vectors by reference, so the grades are saved
//- Add ASCII art at the beginning and the end of the menu
//- Add a function to write the changes to the database???