#ifndef PELICULA_H
#define PELICULA_H

#include "video.h"
#include <string>

class Pelicula : public Video{
    private:
        std::string director;

    public:
        Pelicula();
        Pelicula(std::string name, std::string genre, int launch_year, int duration, std::string director);

        std::string getDirector();

        void setDirector(std::string director);

        void muestraDatos();
};

#endif //PELICULA_H
