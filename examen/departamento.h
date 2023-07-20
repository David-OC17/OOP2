#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include "inmueble.h"

class Departamento : public Inmueble{
    private:
        int num_piso;
        int num_habitaciones;
        int num_banos;
        bool amueblado;
        bool cochera;
        bool elevador;
    public:
        Departamento();
        Departamento(int num_piso, int num_habitaciones, int num_banos, bool amueblado, bool cochera, bool elevador, float frente, float fondo, std::string ubicacion, float valor_catastral);

        int getNumPiso() const;
        int getNumHabitaciones() const;
        int getNumBanos() const;
        bool getAmueblado() const;
        bool getCochera() const;
        bool getElevador() const;

        void setNumPiso(int);
        void setNumHabitaciones(int);
        void setNumBanos(int);
        void setAmueblado(bool);
        void setCochera(bool);
        void setElevador(bool);

        void mostrarDatos() override;
        void precioVenta() override;
};

#endif // DEPARTAMENTO_H