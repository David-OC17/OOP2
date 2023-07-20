#ifndef CASA_H
#define CASA_H

#include "inmueble.h"

class Casa : public Inmueble{
    private:
        int num_pisos;
        int num_habitaciones;
        int num_banos;
        bool jardin;
        bool cochera;
        bool en_privada;
    public:
        Casa();
        Casa(int num_pisos, int num_habitaciones, int num_banos, bool jardin, bool cochera, bool en_privada, float frente, float fondo, std::string ubicacion, float valor_catastral);

        int getNumPisos() const;
        int getNumHabitaciones() const;
        int getNumBanos() const;
        bool getJardin() const;
        bool getCochera() const;
        bool getEnPrivada() const;

        void setNumPisos(int);
        void setNumHabitaciones(int);
        void setNumBanos(int);
        void setJardin(bool);
        void setCochera(bool);
        void setEnPrivada(bool);

        void mostrarDatos() override;
        void precioVenta() override;
};

#endif // CASA_H