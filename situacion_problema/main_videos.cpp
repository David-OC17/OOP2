//David Ortiz Cota A01637391
#include <iostream>
#include<vector>

#include "video.h"
#include "pelicula.h"
#include "serie.h"
#include "menu.h"
#include "database_reader.h"


int main(){
    peliculas_series database = database_reader();

    greeting();
    menu(database.peliculas, database.series, database.peliculas_names, database.series_names);

    return EXIT_SUCCESS;
}

//Missing:
//- Pass the vectors by reference, so the grades are saved