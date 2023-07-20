#include <list>
#include <iostream>
#include <string>

#include "departamento.h"
#include "casa.h"
#include "terreno.h"
#include "local.h"

/*
------Los constructores de las clases tienen los siguientes formatos------

Departamento(int num_piso, int num_habitaciones, int num_banos, bool amueblado, bool cochera, bool elevador, float frente, float fondo, std::string ubicacion, float valor_catastral);

Casa(int num_pisos, int num_habitaciones, int num_banos, bool jardin, bool cochera, bool en_privada, float frente, float fondo, std::string ubicacion, float valor_catastral);

Terreno(bool limpio, bool cercado, bool plano, bool servicios, float frente, float fondo, std::string ubicacion, float valor_catastral);

Local(bool seguridad, bool estacionamiento, bool almacenamiento, std::string tipo, float frente, float fondo, std::string ubicacion, float valor_catastral);
*/

void mostrarTodos(std::list<Inmueble*> inmuebles){
    std::cout << "-----Mostrando datos todos los inmuebles-----" << std::endl;
    for(auto inmueble : inmuebles){
        inmueble->mostrarDatos();
    }
}

int main(){
    //Lista de inmuebles (continene todos los inmuebles, de cualquier tipo)
    std::list<Inmueble*> inmuebles;

    inmuebles.push_back(new Departamento(1, 2, 1, true, true, true, 10, 10, "Calle 1, Colonia Arriba", 100000));
    inmuebles.push_back(new Departamento(4, 3, 2, true, false, true, 15, 35, "Calle 2, Colonia Abajo", 100000));

    inmuebles.push_back(new Casa(2, 3, 2, true, true, false, 300, 500, "Calle 3, Colonia Derecha", 200000));
    inmuebles.push_back(new Casa(2, 3, 4, true, true, true, 80, 120, "Calle 4, Colonia Izquierda", 200000));

    inmuebles.push_back(new Terreno(true, false, true, true, 1000, 10125, "Calle 5, Colonia Centro", 300000));
    inmuebles.push_back(new Terreno(true, true, true, true, 1787.5, 10, "Calle 6, Colonia Centro", 300000));

    inmuebles.push_back(new Local(true, true, false, "Comercial", 130, 50, "Calle 7, Colonia PorTodosLados", 400000));
    inmuebles.push_back(new Local(true, false, true, "Residencial", 50, 50, "Calle 8, Colonia PorTodosLados", 400000));

    mostrarTodos(inmuebles);

    return EXIT_SUCCESS;
}