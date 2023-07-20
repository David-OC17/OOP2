#ifndef EPISODIO_H
#define EPISODIO_H

#include <string>

class Episodio{
    private:
        std::string titulo;
        int temporada;
        int duracion;
    
    public:
        Episodio();
        Episodio(std::string titulo, int temporada, int duracion);

        std::string getTitulo();
        int getTemporada();
        int getDuracion();
        
        void setTitulo(std::string titulo);
        void setTemporada(int temporada);
        void setDuracion(int duracion);

        void muestraDatos();
};

#endif //EPISODIO_H