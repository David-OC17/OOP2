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
/*
12. Mensaje
En esta sección del código se puede apreciar el uso de un mensaje al momento de llamar la función mostrarDatos().
Un mensaje es la solicitud o petición de ejecución de una función de un objeto.
En este caso, se manda a llamar una función polimórfica, ya que la función mostrarDatos() se encuentra definida en la clase Inmueble,
pero se ejecuta la versión de la función que corresponde al tipo de inmueble que se está mostrando.
Cuando un objeto recibe un mensaje, se activa un método correspondiente a ese mensaje en la clase del objeto.
El método se ejecuta y puede realizar una acción, modificar el estado del objeto o devolver algún resultado.
Los mensajes son la forma en la que se comunican los objetos entre sí.
*/
        inmueble->mostrarDatos();
        inmueble->precioVenta();
    }
}

int main(){
    //Lista de inmuebles (continene todos los inmuebles, de cualquier tipo)
    std::list<Inmueble*> inmuebles;

    /*
    2. Objetos
    En esta sección del código se puede apreciar el uso de objetos.
    Los objetos son instancias de una clase, en este caso, los objetos son los inmuebles.
    Cada uno de los objetos creados son tipos de inmuebles (todos han heredado de la clase Inmueble)
    Esto quiere decir que contienen información en común, pero también tienen información que los hace diferentes.
    Cada uno de ellos nos permite organizar la información de una manera más sencilla y nos permite realizar acciones con ellos.
    El hecho de generar objetos a partir de una clase nos permite reutilizar código, ya que no tenemos que escribir
    las mismas funciones para cada uno de los objetos, sino que podemos utilizar las funciones que ya están definidas en la clase.
    Al mismo tiempo, nos permite administrar variables de manera más sencilla e intuitiva.

    5. Instancia
    El concepto de instancia es un concepto más amplio que la mayoría de los conceptos que se han visto en este programa.
    Una instancia es un objeto que se ha creado a partir de una clase.
    En este caso, cada uno de los objetos agregados a la lista son instancias de sus respectivas clases.
    Una instancia representa un objeto en específico, en este caso, un inmueble en específico.
    Las instancias de objetos se generan utilizando el constructor de la clase.
    Al crear la instancia se reserva memoria para el objeto y se inicializan los atributos de la clase.
    */
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