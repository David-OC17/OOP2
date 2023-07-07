//David Ortiz Cota A01637391
#include "video.h"
#include "pelicula.h"
#include "serie.h"

#include <iostream>
#include<vector>

std::vector<Pelicula> peliculas;
std::vector<Serie> series;

void case1_peliculas(){
    std::cout << "Showing info" << std::endl;
    for(int i = 0; i < peliculas.size(); i++){
        std::cout << "Video " << i << std::endl;
        peliculas[i].show_info();
        std::cout << std::endl;
    }
}

void case1_series(){
    std::cout << "Showing info" << std::endl;
    for(int i = 0; i < series.size(); i++){
        std::cout << "Video " << i << std::endl;
        series[i].show_info();
        std::cout << std::endl;
    }
}

void case2_peliculas(){
    std::cout << "Which video do you want to grade? \n";
    int video_index;
    std::cin >> video_index;

    std::cout << "What grade do you want to give? \n";
    int grade;
    std::cin >> grade;

    peliculas[video_index].grade_video(grade);
}

void case2_series(){
    std::cout << "Which video do you want to grade? \n";
    int video_index;
    std::cin >> video_index;

    std::cout << "What grade do you want to give? \n";
    int grade;
    std::cin >> grade;

    series[video_index].grade_video(grade);
}

void case1(){
    std::cout << "1. Peliculas" << std::endl;
    std::cout << "2. Series" << std::endl;
    std::cout << "3. Exit" << std::endl;

    std::cout << "Choose an option: ";
    int option;
    std::cin >> option;

    switch(option){
        case 1:
            case1_peliculas();
            break;
        case 2:
            case1_series();
            break;
        case 3:
            //Exit
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
    };
}

void case2(){
    std::cout << "1. Peliculas" << std::endl;
    std::cout << "2. Series" << std::endl;
    std::cout << "3. Exit" << std::endl;

    std::cout << "Choose an option: ";
    int option;
    std::cin >> option;

    switch(option){
        case 1:
            case2_peliculas();
            break;
        case 2:
            case2_series();
            break;
        case 3:
            //Exit
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
    };
}

bool menu(){
    int option = 0;

    std::cout << "1. Show info" << std::endl;
    std::cout << "2. Grade video" << std::endl;
    std::cout << "3. Exit" << std::endl;

    std::cout << "Choose an option: ";
    std::cin >> option;

        switch(option){
            case 1:
                case1();
                std::cout << std::endl << std::endl << std::endl;
                menu();
                break;
            case 2:
                case2();
                std::cout << std::endl << std::endl << std::endl;
                menu();
                break;
            case 3:
                //Exit
                break;
            default:
                std::cout << "Invalid option" << std::endl;
                break;
        };
    return true;
}


int main(){
    //En esta parte se aplica el concepto de objeto, al generar dos y almacenarlos en un vector
    peliculas.push_back(Pelicula("George Lucas", "StarWars", "Fantasy", 2002, 179));
    peliculas.push_back(Pelicula("George Lucas", "StarWars", "Fantasy", 2002, 179));

    series.push_back(Serie(10, 1, "Game of Thrones", "Fantasy", 2011, 60));
    series.push_back(Serie(10, 1, "Game of Thrones", "Fantasy", 2011, 60));

    menu();

    return EXIT_SUCCESS;
}