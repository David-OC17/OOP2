#ifndef LOCAL_H
#define LOCAL_H

#include "inmueble.h"

class Local : public Inmueble{
    private:
        bool seguridad;
        bool estacionamiento;
        bool almacenamiento;
        std::string tipo;
    public:
        Local();
        Local(bool seguridad, bool estacionamiento, bool almacenamiento, std::string tipo, float frente, float fondo, std::string ubicacion, float valor_catastral);

        bool getSeguridad() const;
        bool getEstacionamiento() const;
        bool getAlmacenamiento() const;
        std::string getTipo() const;

        void setSeguridad(bool);
        void setEstacionamiento(bool);
        void setAlmacenamiento(bool);
        void setTipo(std::string);

        void mostrarDatos() override;
        void precioVenta() override;
};

#endif // LOCAL_H