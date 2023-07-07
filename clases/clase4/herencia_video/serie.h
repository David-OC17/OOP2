#ifndef SERIE_H
#define SERIE_H

#include "video.h"
#include <string>

class Serie : public Video{
    private:
        int num_episodios;
        int num_temporadas;
        
    public:
        Serie();
        Serie(int num_episodios, int num_temporadas, std::string name, std::string genre, int launch_year, int duration);

        int getNum_episodios();
        int getNum_temporadas();
        void setNum_episodios(int num_episodios);
        void setNum_temporadas(int num_temporadas);

        void muestraDatos();
};

#endif //SERIE_H