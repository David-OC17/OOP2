#include <iostream>
#include <vector>

#include "menu.h"

void greeting(){
    std::cout << R"(
██     ██ ███████ ██       ██████  ██████  ███    ███ ███████     ████████  ██████       ██████ ██ ███    ██ ███████  ██████  ██████  ███    ██ ███████  ██████  ██      ███████ ██ 
██     ██ ██      ██      ██      ██    ██ ████  ████ ██             ██    ██    ██     ██      ██ ████   ██ ██      ██      ██    ██ ████   ██ ██      ██    ██ ██      ██      ██ 
██  █  ██ █████   ██      ██      ██    ██ ██ ████ ██ █████          ██    ██    ██     ██      ██ ██ ██  ██ █████   ██      ██    ██ ██ ██  ██ ███████ ██    ██ ██      █████   ██ 
██ ███ ██ ██      ██      ██      ██    ██ ██  ██  ██ ██             ██    ██    ██     ██      ██ ██  ██ ██ ██      ██      ██    ██ ██  ██ ██      ██ ██    ██ ██      ██         
 ███ ███  ███████ ███████  ██████  ██████  ██      ██ ███████        ██     ██████       ██████ ██ ██   ████ ███████  ██████  ██████  ██   ████ ███████  ██████  ███████ ███████ ██ 
                                                                                                                                                                                    
                                                                                                                                                                                    )" << std::endl;
}

void print_options(std::vector<std::string> &names){
    for(int i = 0; i < names.size(); i++){
        std::cout << i+1 << ". " << names[i] << std::endl;
    }
}

void case1_peliculas(std::vector<Pelicula> &peliculas){
    std::cout << "-----Showing info-----" << std::endl;
    for(int i = 0; i < peliculas.size(); i++){
        std::cout << "Movie " << i+1 << std::endl;
        peliculas[i].muestraDatos();
        std::cout << std::endl;
    }
    std::cout << "----------------------" << std::endl;
}

void case1_series(std::vector<Serie> &series){
    std::cout << "-----Showing info-----" << std::endl;
    for(int i = 0; i < series.size(); i++){
        std::cout << "Serie " << i+1 << std::endl;
        series[i].muestraDatos();
        std::cout << std::endl;
    }
    std::cout << "----------------------" << std::endl;
}

void case1_both(std::vector<Pelicula> &peliculas, std::vector<Serie> &series){
    std::cout << "-----Showing info-----" << std::endl;
    for(int i = 0; i < peliculas.size(); i++){
        std::cout << "Movie " << i+1 << std::endl;
        peliculas[i].muestraDatos();
        std::cout << std::endl;
    }
    for(int i = 0; i < series.size(); i++){
        std::cout << "Serie " << i+1 << std::endl;
        series[i].muestraDatos();
        std::cout << std::endl;
    }
    std::cout << "----------------------" << std::endl;
}

void case2_peliculas(std::vector<Pelicula> &peliculas, std::vector<std::string> &peliculas_names){
    print_options(peliculas_names);
    std::cout << "-------Grading--------" << std::endl;
    std::cout << "Which movie do you want to grade?\n(Type the number of the movie in the list)\n";
    int video_index;
    std::cin >> video_index;

    std::cout << "What grade do you want to give? \n";
    int grade;
    std::cin >> grade;

    video_index -= 1;
    peliculas[video_index].grade_video(grade);
    std::cout << "----------------------" << std::endl;
}

void case2_series(std::vector<Serie> &series, std::vector<std::string> &series_names){
    print_options(series_names);
    std::cout << "-------Grading--------" << std::endl;
    std::cout << "Which serie do you want to grade?\n(Type the number of the serie in the list)\n";
    int video_index;
    std::cin >> video_index;

    std::cout << "What grade do you want to give? \n";
    int grade;
    std::cin >> grade;

    video_index -= 1;
    series[video_index].grade_video(grade);
    std::cout << "----------------------" << std::endl;
}

void case1(std::vector<Pelicula> &peliculas, std::vector<Serie> &series, std::vector<std::string> &peliculas_names, std::vector<std::string> &series_names){
    std::cout << "1. Movies" << std::endl;
    std::cout << "2. Series" << std::endl;
    std::cout << "3. Both" << std::endl;
    std::cout << "4. Exit" << std::endl;

    std::cout << "Choose an option: ";
    int option;
    std::cin >> option;

    switch(option){
        case 1:
            std::cout << std::endl;
            case1_peliculas(peliculas);
            break;
        case 2:
            std::cout << std::endl;
            case1_series(series);
            break;
        case 3:
            std::cout << std::endl;
            case1_both(peliculas, series);
            break;
        case 4:
            //Exit
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
    };
}

void case2(std::vector<Pelicula> &peliculas, std::vector<Serie> &series, std::vector<std::string> &peliculas_names, std::vector<std::string> &series_names){
    std::cout << "1. Movies" << std::endl;
    std::cout << "2. Series" << std::endl;
    std::cout << "3. Exit" << std::endl;

    std::cout << "Choose an option: ";
    int option;
    std::cin >> option;

    switch(option){
        case 1:
            std::cout << std::endl;
            case2_peliculas(peliculas, peliculas_names);
            break;
        case 2:
            std::cout << std::endl;
            case2_series(series, series_names);
            break;
        case 3:
            //Exit
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
    };
}

bool menu(std::vector<Pelicula> &peliculas, std::vector<Serie> &series, std::vector<std::string> &peliculas_names, std::vector<std::string> &series_names){
    int option = 0;

    std::cout << "1. Show info" << std::endl;
    std::cout << "2. Grade movie/series" << std::endl;
    std::cout << "3. Exit" << std::endl;

    std::cout << "Choose an option: ";
    std::cin >> option;

        switch(option){
            case 1:
                std::cout << std::endl;
                case1(peliculas, series, peliculas_names, series_names);
                std::cout << "\n\n\n\n";
                menu(peliculas, series, peliculas_names, series_names);
                break;
            case 2:
                std::cout << std::endl;
                case2(peliculas, series, peliculas_names, series_names);
                std::cout << "\n\n\n\n";
                menu(peliculas, series, peliculas_names, series_names);
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
