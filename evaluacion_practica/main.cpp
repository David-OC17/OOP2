//David Ortiz Cota - A015637391
//TC1030 - Grupo 850

#include <iostream>
#include <string>
#include <vector>
#include <array>

#include "estudiante.h"
#include "profesor.h"
#include "grupo.h"

//Estudiante(std::string nombre, std::string carrera, std::string matricula);
//Profesor(std::string nombre, std::string nomina, std::string departamento);

int main(){
    //Implementación con array de punteros a Persona
    std::cout << "---Implementación con array de punteros a Persona---" << std::endl;
    std::array<Persona*, 5> personas_array;
    personas_array[0] = new Estudiante("Juan Sánchez", "Ing. Mecatrónica", "A01234567");
    personas_array[1] = new Estudiante("Mónica Pérez", "Ing. en Tecnologías Computacionales", "A01223344");
    personas_array[2] = new Estudiante("Carlos Amador", "A01234455", "Ing. Industrial");

    personas_array[3] = new Profesor("Ernesto Ramírez", "L00700700", "Departamento de Computación");
    personas_array[4] = new Profesor("José Antonio Rodríguez", "L099999", "Departamento de Ciencias Básicas");

    for (Persona* persona : personas_array){
        persona->imprimir();
        std::cout << std::endl;
    }

    //Implementación con vector de punteros a Persona
    std::cout << "---Implementación con vector de punteros a Persona---" << std::endl;
    std::vector<Persona*> personas;
    personas.push_back(new Estudiante("Juan Sánchez", "Ing. Mecatrónica", "A01234567"));
    personas.push_back(new Estudiante("Mónica Pérez", "Ing. en Tecnologías Computacionales", "A01223344"));
    personas.push_back(new Estudiante("Carlos Amador", "A01234455", "Ing. Industrial"));

    personas.push_back(new Profesor("Ernesto Ramírez", "L00700700", "Departamento de Computación"));
    personas.push_back(new Profesor("José Antonio Rodríguez", "L099999", "Departamento de Ciencias Básicas"));

    for (Persona* persona : personas){
        persona->imprimir();
        std::cout << std::endl;
    }

    //Utilización de la clase Grupo
    //Implementación con vector de punteros a Persona y sobrecarga del operador +
    Grupo grupo;
    grupo = grupo + personas[0];
    grupo = grupo + personas[1];
    grupo = grupo + personas[2];
    grupo = grupo + personas[3];

    grupo.imprimir();

    return EXIT_SUCCESS;
}