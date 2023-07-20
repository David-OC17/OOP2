#ifndef TERRENO_H
#define TERRENO_H

#include "inmueble.h"

class Terreno : public Inmueble{
    private:
        bool limpio;
        bool cercado;
        bool plano;
        bool servicios;
    public:
        Terreno();
        Terreno(bool limpio, bool cercado, bool plano, bool servicios, float frente, float fondo, std::string ubicacion, float valor_catastral);

        bool getLimpio() const;
        bool getCercado() const;
        bool getPlano() const;
        bool getServicios() const;

        void setLimpio(bool);
        void setCercado(bool);
        void setPlano(bool);
        void setServicios(bool);

        void mostrarDatos() override;
        void precioVenta() override;
};

#endif // TERRENO_H
