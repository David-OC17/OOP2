#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>

#include "persona.h"

class Profesor : public Persona {
    private:
        std::string nomina;
        std::string departamento;
    public:
        Profesor(std::string nombre, std::string nomina, std::string departamento);

        std::string getNomina() const;
        std::string getDepartamento() const;

        void setNomina(std::string nomina);
        void setDepartamento(std::string departamento);

        void imprimir() const override;
};

#endif // PROFESOR_H