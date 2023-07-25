//David Ortiz Cota A01637391
#include <iostream>
#include <vector>

#include "video.h"
#include "pelicula.h"
#include "serie.h"
#include "menu.h"
#include "database_reader.h"


int main(){
    peliculas_series database = database_reader();

    /*
    //Try giving a video a grade higher than 10 by adding to it
    Video v1("Movie", "The Godfather", "Drama", 1972, 175, 9.2);
    v1.muestraDatos();
    Video v2 = v1 + 1.0;
    */

    greeting();
    menu(database.peliculas, database.series, database.peliculas_names, database.series_names);

    return EXIT_SUCCESS;
}
