#include <iostream>
#include <vector>

#include "menu.h"

void case1_peliculas(std::vector<Pelicula> peliculas){
    std::cout << "Showing info" << std::endl;
    for(int i = 0; i < peliculas.size(); i++){
        std::cout << "Video " << i << std::endl;
        peliculas[i].muestraDatos();
        std::cout << std::endl;
    }
}

void case1_series(std::vector<Serie> series){
    std::cout << "Showing info" << std::endl;
    for(int i = 0; i < series.size(); i++){
        std::cout << "Video " << i << std::endl;
        series[i].muestraDatos();
        std::cout << std::endl;
    }
}

void case2_peliculas(std::vector<Pelicula> peliculas){
    std::cout << "Which video do you want to grade? \n";
    int video_index;
    std::cin >> video_index;

    std::cout << "What grade do you want to give? \n";
    int grade;
    std::cin >> grade;

    peliculas[video_index].grade_video(grade);
}

void case2_series(std::vector<Serie> series){
    std::cout << "Which video do you want to grade? \n";
    int video_index;
    std::cin >> video_index;

    std::cout << "What grade do you want to give? \n";
    int grade;
    std::cin >> grade;

    series[video_index].grade_video(grade);
}

void case1(std::vector<Pelicula> peliculas, std::vector<Serie> series){
    std::cout << "1. Peliculas" << std::endl;
    std::cout << "2. Series" << std::endl;
    std::cout << "3. Exit" << std::endl;

    std::cout << "Choose an option: ";
    int option;
    std::cin >> option;

    switch(option){
        case 1:
            case1_peliculas(peliculas);
            break;
        case 2:
            case1_series(series);
            break;
        case 3:
            //Exit
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
    };
}

void case2(std::vector<Pelicula> peliculas, std::vector<Serie> series){
    std::cout << "1. Peliculas" << std::endl;
    std::cout << "2. Series" << std::endl;
    std::cout << "3. Exit" << std::endl;

    std::cout << "Choose an option: ";
    int option;
    std::cin >> option;

    switch(option){
        case 1:
            case2_peliculas(peliculas);
            break;
        case 2:
            case2_series(series);
            break;
        case 3:
            //Exit
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
    };
}

bool menu(std::vector<Pelicula> peliculas, std::vector<Serie> series){
    int option = 0;

    std::cout << "1. Show info" << std::endl;
    std::cout << "2. Grade video" << std::endl;
    std::cout << "3. Exit" << std::endl;

    std::cout << "Choose an option: ";
    std::cin >> option;

        switch(option){
            case 1:
                case1(peliculas, series);
                std::cout << std::endl << std::endl << std::endl;
                menu(peliculas, series);
                break;
            case 2:
                case2(peliculas, series);
                std::cout << std::endl << std::endl << std::endl;
                menu(peliculas, series);
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
