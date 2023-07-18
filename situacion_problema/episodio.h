#ifndef EPISODIO_H
#define EPISODIO_H

#include <string>

class Episodio{
    private:
        std::string titulo;
        std::string temporada;
    
    public:
        Episodio();
        Episodio(std::string titulo, std::string temporada);

        std::string getTitulo();
        std::string getTemporada();
        void setTitulo(std::string titulo);
        void setTemporada(std::string temporada);

        void muestraDatos();
};

#endif //EPISODIO_H