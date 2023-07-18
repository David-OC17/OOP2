#ifndef SERIE_H
#define SERIE_H

#include "video.h"
#include "episodio.h"
#include <string>
#include <vector>

class Serie : public Video{
    private:
        std::vector<Episodio> episodios;
        int num_episodios;
        int num_temporadas;
        
    public:
        Serie();
        Serie(std::string name, std::string genre, int launch_year, int duration, int num_episodios, int num_temporadas);

        int getNum_episodios();
        int getNum_temporadas();
        void setNum_episodios(int num_episodios);
        void setNum_temporadas(int num_temporadas);

        void muestraDatos();
};

#endif //SERIE_H