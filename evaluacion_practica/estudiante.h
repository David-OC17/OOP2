#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

#include "persona.h"

class Estudiante : public Persona {
    private:
        std::string carrera;
        std::string matricula;
    public:
        Estudiante(std::string nombre, std::string carrera, std::string matricula);

        std::string getCarrera() const;
        std::string getMatricula() const;

        void setCarrera(std::string carrera);
        void setMatricula(std::string matricula);

        void imprimir() const override;
};

#endif // ESTUDIANTE_H