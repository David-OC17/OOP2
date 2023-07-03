//David Ortiz Cota A01637391
#include "video.h"
#include <iostream>
#include<vector>

std::vector<Video> videos;

void menu(){
    int option = 0;

    while(option != 3){
    std::cout << "1. Show info" << std::endl;
    std::cout << "2. Grade video" << std::endl;
    std::cout << "3. Exit" << std::endl;

    std::cout << "Choose an option: ";
    int option;
    std::cin >> option;

        switch(option){
            case 1:
                std::cout << "Showing info" << std::endl;
                for(int i = 0; i < videos.size(); i++){
                    std::cout << "Video " << i << std::endl;
                    //En la siguiente linea se puede observar el uso de un metodo accesor
                    //su uso demuestra la diferencia de accesibilidad entre los atributos de una clase
                    //y los metodos de una clase, unos que son privados y otros que son publicos
                    //cabe resaltar que el llamar a la función show_info() es un mensaje que se envia al objeto
                    videos[i].show_info();
                }
                break;
            case 2:
                std::cout << "Which video do you want to grade? \n";
                int video_index;
                std::cin >> video_index;

                std::cout << "What grade do you want to give? \n";
                int grade;
                std::cin >> grade;

                videos[video_index].grade_video(grade);
                break;
            case 3:
                //Exit
                break;
            default:
                std::cout << "Invalid option" << std::endl;
                break;
        };
    };
    }




int main(){
    //En esta parte se aplica el concepto de objeto, al generar dos y almacenarlos en un vector
    //En esta versión del main, se crean dos instancias de la clase Video
    videos.push_back(Video("Movie", "The Lord of the Rings", "Fantasy", 10, 2001, 178));
    videos.push_back(Video("Movie", "StarWars", "Fantasy", 2002, 179));

    menu();

    return EXIT_SUCCESS;
}