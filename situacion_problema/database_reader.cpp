#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>

#include "serie.h"
#include "pelicula.h"
#include "database_reader.h"

//The format of each line of the csv file is:

//example movie:
//Movie,Inception,Action,2010,148,Christopher Nolan

//example serie:
//Serie,Stranger Things,Drama,2016,51,1,8

//This funciton returns a struct that contains two vectors, one with all the movies and another with all the series
peliculas_series database_reader(){
    std::vector<Pelicula> peliculas;
    std::vector<Serie> series;

    std::ifstream Database;
    Database.open("database.csv");
    std::string line;

    //Variables for object creation
    std::string name;
    std::string genre;
    int year;
    int duration;
    //For movie
    std::string director;
    //For serie
    int season;
    int episodes;

    while(std::getline(Database, line)){
        std::stringstream ss(line);
        std::string data;
        std::vector<std::string> row;
        while(std::getline(ss, data, ',')){
            row.push_back(data);
        }
        if(row[0] == "Movie"){
            name = row[1];
            genre = row[2];
            year = std::stoi(row[3]);
            duration = std::stoi(row[4]);
            director = row[5];
            Pelicula pelicula(name, genre, year, duration, director);
            peliculas.push_back(pelicula);

        }else if(row[0] == "Serie"){
            name = row[1];
            genre = row[2];
            year = std::stoi(row[3]);
            duration = std::stoi(row[4]);
            season = std::stoi(row[5]);
            episodes = std::stoi(row[6]);
            Serie serie(name, genre, year, duration, season, episodes);
            series.push_back(serie);
        }
    }
    Database.close();

    peliculas_series result;
    result.peliculas = peliculas;
    result.series = series;

    return result;
}