//David Ortiz Cota A01637391
#include "video.h"
#include <iostream>

Video :: Video(){
    this->type = "";
    this->name = "";
    this->genre = "";
    this->grade = 0.0;
    this->launch_year = 0;
    this->duration = 0;
}

Video :: Video(std::string type, std::string name, std::string genre, int launch_year, int duration, float grade){
    this->type = type;
    this->name = name;
    this->genre = genre;
    this->grade = grade;
    this->launch_year = launch_year;
    this->duration = duration;
}

void Video :: muestraDatos(){
    std::cout << "Type: " << this->type << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Genre: " << this->genre << std::endl;
    std::cout << "Grade: " << this->grade << std::endl;
    std::cout << "Launch year: " << this->launch_year << std::endl;
    std::cout << "Duration: " << this->duration << std::endl;
}

void Video :: grade_video(float grade){
    this->grade = grade;
}

std::string Video :: get_type(){
    return this->type;
}

std::string Video :: get_name(){
    return this->name;
}

std::string Video :: get_genre(){
    return this->genre;
}

float Video :: get_grade(){
    return this->grade;
}

int Video :: get_launch_year(){
    return this->launch_year;
}

int Video :: get_duration(){
    return this->duration;
}

void Video :: set_type(std::string type){
    this->type = type;
}

void Video :: set_name(std::string name){
    this->name = name;
}

void Video :: set_genre(std::string genre){
    this->genre = genre;
}

void Video :: set_launch_year(int launch_year){
    this->launch_year = launch_year;
}

void Video :: set_duration(int duration){
    this->duration = duration;
}

