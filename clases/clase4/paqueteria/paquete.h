#ifndef PAQUETE_H
#define PAQUETE_H

#include "envio.h"
#include <string>

class paquete : public envio{
    private:
        float peso;
        float largo;
        float ancho;
        float alto;
        
        float costo_por_kg;

    public:
        paquete();
        paquete(std::string, std::string, std::string, std::string, int, int, double, float, float, float, float, float);

        float calculaCosto();
};

#endif // "PAQUETE_H"