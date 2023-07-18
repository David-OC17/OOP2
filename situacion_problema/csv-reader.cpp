#include <fstream>
#include <sstream>
#include <vector>

#include "serie.h"
#include "pelicula.h"

//The format of each line of the csv file is:

//example movie:
//Movie,Inception,Action,2010,148,Christopher Nolan

//example serie:
//Series,Stranger Things,Drama,2016,51,1,8

struct result{
    std::vector<Pelicula> peliculas;
    std::vector<Serie> series;
};

//This funciton returns a struct that contains two vectors, one with all the movies and another with all the series
result read_csv(){
    std::vector<Pelicula> peliculas;
    std::vector<Serie> series;

    std::ifstream Database;
    Database.open("database.csv");
    std::string line;

    while(std::getline(Database, line)){
        std::stringstream ss(line);
        std::string data;
        std::vector<std::string> row;
        while(std::getline(ss, data, ',')){
            row.push_back(data);
        }
        if(row[0] == "Movie"){
            Pelicula pelicula(row[1], row[2], std::stoi(row[4]), std::stoi(row[5]), row[6]);
            peliculas.push_back(pelicula);
        }else if(row[0] == "Serie"){
            Serie serie(row[1], row[2], std::stoi(row[3]), std::stoi(row[4]), std::stoi(row[5]), std::stoi(row[6]));
            series.push_back(serie);
        }
    }
    Database.close();

    struct result result;
    result.peliculas = peliculas;
    result.series = series;

    return result;
}

int main(){
    read_csv();

    return EXIT_SUCCESS;
}