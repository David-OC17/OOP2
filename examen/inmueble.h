#ifndef INMUEBLE_H
#define INMUEBLE_H

#include <iostream>
#include <string>

class Inmueble {
    private:
        float frente;
        float fondo;
        std::string ubicacion;
        float valor_catastral;
    public:
        Inmueble();
        Inmueble(float frente, float fondo, std::string ubicacion, float valor_catastral);

        float getFrente() const;
        float getFondo() const;
        std::string getUbicacion() const;
        float getValorCatastral() const;

        void setFrente(float);
        void setFondo(float);
        void setUbicacion(std::string);
        void setValorCatastral(float);

        float calcularArea();
        float calcularValorMetroCuadrado();

        virtual void mostrarDatos();
        virtual void precioVenta();
};

#endif // INMUEBLE_H