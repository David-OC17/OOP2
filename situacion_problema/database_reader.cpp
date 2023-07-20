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

void set_episodes_to_series(std::vector<Serie> &series, std::vector<Episodio> &episodes){
    int episode_index = 0;
    for(int i = 0; i < series.size(); i++){
        std::vector<Episodio> serie_episodes;
        for(int j = 0; j < series[i].getNum_episodios(); j++){
            serie_episodes.push_back(episodes[episode_index]);
            episode_index++;
        }
        series[i].setEpisodios(serie_episodes);
    }
}

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
    int grade;
    //For movie
    std::string director;
    //For serie
    int season;
    int num_episodes;

    //For all series
    std::vector<Episodio> all_episodes;

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
            grade = std::stof(row[6]);
            Pelicula pelicula(name, genre, year, duration, director, grade);
            peliculas.push_back(pelicula);

        }else if(row[0] == "Serie"){
            name = row[1];
            genre = row[2];
            year = std::stoi(row[3]);
            season = std::stoi(row[4]);
            num_episodes = std::stoi(row[5]);
            grade = std::stof(row[6]);
            Serie serie(name, genre, year, season, num_episodes, grade);
            series.push_back(serie);
        }else if(row[0] == "Episode"){
            name = row[1];
            duration = std::stoi(row[2]);
            grade = std::stof(row[3]);
            Episodio episode(name, duration, grade);
            all_episodes.push_back(episode);
        }
    }
    Database.close();
    set_episodes_to_series(series, all_episodes);

    peliculas_series result;
    result.peliculas = peliculas;
    result.series = series;

    return result;
}