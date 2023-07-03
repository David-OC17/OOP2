//David Ortiz Cota A01637391
#include "video.h"
#include <iostream>

Video :: Video(std::string type, std::string name, std::string genre, int launch_year, int duration){
    this->type = type;
    this->name = name;
    this->genre = genre;
    this->grade = 0;
    this->launch_year = launch_year;
    this->duration = duration;
}

Video :: Video(std::string type, std::string name, std::string genre, int grade, int launch_year, int duration){
    this->type = type;
    this->name = name;
    this->genre = genre;
    this->grade = grade;
    this->launch_year = launch_year;
    this->duration = duration;
}

void Video :: show_info(){
    std::cout << "Type: " << this->type << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Genre: " << this->genre << std::endl;
    std::cout << "Grade: " << this->grade << std::endl;
    std::cout << "Launch year: " << this->launch_year << std::endl;
    std::cout << "Duration: " << this->duration << std::endl;
}

void Video :: grade_video(int grade){
    this->grade = grade;
}

