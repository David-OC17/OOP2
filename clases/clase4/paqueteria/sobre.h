#ifndef SOBRE_H
#define SOBRE_H

#include "envio.h"
#include <string>

class sobre : public envio{
    private:
        float largo;
        float ancho;
        
        float costo_por_kg;

    public:
        sobre();
        sobre(std::string, std::string, std::string, std::string, int, int, double, float, float, float);

        float calculaCosto();
};

#endif // "SOBRE_H"