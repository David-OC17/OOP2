#ifndef INMUEBLE_H
#define INMUEBLE_H

#include <iostream>
#include <string>

/*
1.Clase
En esta sección del código se puede apreciar el uso de una clase.
La clase Inmueble es la clase padre de las clases Departamento, Casa, Terreno y Local.
La clase tiene atributos que representan las características de un inmueble, así
como métodos que representan las acciones que se pueden realizar con la información de un inmueble.
Las clases son plantillas que se utilizan para crear objetos, en este caso, la clase Inmueble.

3. Abstracción
En esta sección del código se puede apreciar el uso de abstracción.
La clase Inmueble es una abstracción de un inmueble, ya que contiene información que es común a todos los inmuebles,
pero también contiene información que es específica de cada tipo de inmueble.
El proceso de abstracción en este caso consistió en identificar las características importantes para representar un inmueble
y las acciones que se pueden realizar con la información de un inmueble.
Ignoramos datos y características que no son relevantes a las operaciones que se buscar realizar a través de este programa.

4. Encapsulamiento
En esta sección del código se puede apreciar el uso de encapsulamiento.
Dentro de la clase Inmueble se encapsula información a cerca de un inmueble.
Las dimensiones de frente y fondo, la ubicación o dirección, y el valor catastral son datos que valen la pena encapsular,
ya que son datos que deberían de ser restringidos en acceso; son datos que le pertenecen al inmueble.
Al encapsular la información y operaciones relevantes a un Inmueble se puede restringir el acceso a la información, 
así como simplificar su manejo.
*/


class Inmueble {
/*
8. Atributos
En esta sección del código se puede apreciar la declaración de los atributos de la clase Inmueble.
Un atributo es una variable que pertenece a una clase.
Los atributos suelen represnetar las características de un objeto.
En este caso, los atributos de la clase Inmueble representan algunas de las características físicas de un inmueble,
así como su ubicación y valor catastral.
A través de los atributos se busca contener información relevante al objeto (o con relación) dentro de la clase.
*/
    private:
        float frente;
        float fondo;
        std::string ubicacion;
        float valor_catastral;
    public:
/*
6. Constructor por defecto
En esta sección del código se puede apreciar la declaración de un constructor por defecto.
El constructor por defecto es un constructor que no recibe parámetros.
En este caso, el constructor por defecto de la clase Inmueble inicializa los atributos de la clase con valores por defecto.
El constructor por defecto permite crear instacias de objetos de la clase, sin necesidad de llamar a un constructor que incluya argumentos
para todos los atributos de la clase.
Comúnmente si se genera un objeto a través del constructor por defecto, depués se modifican los atributos a través de métodos
espciales como getters.

7. Constructor alternativo
En esta sección del código se puede apreciar la declaración de un constructor alternativo.
Un constructor alternativo es un constructor que recibe parámetros.
A diferencia del constructor por defecto, el constructor alternativo permite inicializar los atributos de la clase con valores específicos.
En este caso, el constructor alternativo de la clase Inmueble inicializa los atributos de la clase con valores específicos.
Pueden existir diferentes constructores alternativos, cada uno con diferentes parámetros, es decir, pueden ser sobrecargados.

Una característica importante de los constructores en C++ es que deben de tener el mismo nombre que la clase, sin importar
si son constructores por defecto o alternativos.
*/
        Inmueble();
        Inmueble(float frente, float fondo, std::string ubicacion, float valor_catastral);
/*
9. Método accesor
En esta sección del código se puede apreciar la declaración de métodos accesores.
Los métodos accesores son métodos que permiten acceder a los atributos de una clase.
Los métodos accesores son métodos públicos, ya que se busca que sean accesibles desde fuera de la clase.
La razón por la cual se suelen utilizar métodos accesores es para restringir el acceso a los atributos de una clase.
Los atributos son declarados como privados, y los métodos accesores son declarados como públicos.
Los métodos accesor proporcionan una forma más segura de acceder a los atributos, buscando evitar que se modifiquen
los atributos de manera inapropiada o en un momento inapropiado.
La convención más común de nombres para los métodos accesores es getNombreAtributo, donde NombreAtributo es el nombre del atributo
Se puede declarar un método accesor con const, para indicar que el método no modificará los atributos de la clase.
*/
        float getFrente() const;
        float getFondo() const;
        std::string getUbicacion() const;
        float getValorCatastral() const;
/*
10. Método modificador
En esta sección del código se puede apreciar la declaración de métodos modificadores.
Los métodos modificadores son métodos que permiten modificar los atributos de una clase.
Los métodos modificadores son métodos públicos, ya que se busca que sean accesibles desde fuera de la clase.
Los métodos modificadores nos permiten modificar los atributos de una clase de manera controlada, inclusive podemos
agregar validaciones para asegurar que los atributos se modifiquen de manera correcta, asifnantdo valores válidos para los atributos.
Los métodos modificadores pueden ser declarados como funciones void, ya que normalmente no regresan ningún valor.
*/
        void setFrente(float);
        void setFondo(float);
        void setUbicacion(std::string);
        void setValorCatastral(float);

/*
11. Método especializado
En esta sección del código se puede apreciar la declaración de métodos especializados.
Los métodos especializados son métodos que realizan una tarea específica.
Los métodos especializados para la clase Inmeuble son operaciones que se pueden realizar con la información de un inmueble.
Cada uno de ellos comple con una tarea específica, como calcular el área de un inmueble, calcular el valor del metro cuadrado,
mostrar los datos de un inmueble, o calcular el precio de venta de un inmueble.
Cabe resaltar los últimos dos mencionados, ya que son métodos virtuales, es decir, son métodos que pueden ser sobreescritos.
*/
        float calcularArea();
        float calcularValorMetroCuadrado();

        virtual void mostrarDatos();
        virtual void precioVenta();
};

#endif // INMUEBLE_H