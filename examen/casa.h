#ifndef CASA_H
#define CASA_H

#include "inmueble.h"

/*
13. Herencia
En esta sección del código se puede apreciar el uso de herencia.
La clase Casa hereda de la clase Inmueble, por lo tanto la clase Casa es una subclase de la clase Inmueble.
La clase Casa hereda los atributos y métodos de la clase Inmueble, lo cual significa que la clase Casa tiene
los atributos y métodos de la clase Inmueble, además de los atributos y métodos que se definan en la clase Casa.
Conceptualmente, la herencia se suele ver en la forma de categorías. 
Debido a que una casa es un tipo de inmueble, tiene sentido contar con una clase padre Inmueble, que tiene
información en común con todos los inmuebles.
En este programa se estable un tipo de herencia llamada herencia jerárquica, ya que la clase Inmueble es la clase padre
de las clases Departamento, Casa, Terreno y Local.
Además de esto, es de relevancia señalar cómo se implementa la herencia en el código.
La herencia para la clase Casa se declara utilizando la palabra reservada "public" seguida del nombre de la clase padre.
Esto significa que la clase Casa hereda de manera pública los atributos y métodos de la clase Inmueble.
Esto quiere decir que los atributos y métodos de la clase Inmueble pueden ser accedidos por la clase Casa, sin necesidad de llamarlos
a través de una instancia de la clase Inmueble.
*/
class Casa : public Inmueble{
/*
15. Accesibilidad y tipos
La accesibilidad se refiere a los niveles de visibilidad que se pueden aplicar a los miembros de una clase. En C++, existen tres niveles de acceso:
public, private y protected.
Cada uno de ellos ayuda a controlar el acceso a los miembros de una clase.
Para esta clase, así como para el resto de las clases en este programa, los atributos se declararon como private.
Esto significa que los atributos sólo pueden ser accedidos por la clase en la que se declararon.
Los métodos se declararon como public, lo cual significa que los métodos pueden ser accedidos por cualquier clase.
La herencia se realiza de manera pública, lo cual significa que los atributos y métodos de la clase Inmueble pueden ser accedidos
por la clase Casa.

El tipo representa las características y comportamientos compartidos por los objetos creados a partir de esa clase.
Existen tipos de objetos que son más generales, como la clase Inmueble, y existen tipos de objetos que son más específicos,
como la clase Casa.
El concepto de tipo también se extiende al concepto de tipo de dato. En C++ existen tipos de datos como int, float, char, etc.
Cada uno de ellos es un obejeto de clases diferentes, pero todos son tipos de datos.
Estas clases se encuentran definidas en la librería estándar de C++.
En este programa se utilizan tipos de datos como int, float, bool y string, para representar enteros, numeros con decimales,
valores booleanos y cadenas de caracteres, respectivamente.
Por otra parte, existen tipos de clases abstractas, que son aquellos que no pueden ser instanciados.
También existen tipos de clases concretas, que son aquellos que pueden ser instanciados.
En este programa se utilizan tipos de clases concretas, ya que se crean instancias de las clases Departamento, Casa, Terreno y Local.
A pesar de que la clase Inmueble en este programa es una clase concreta, conceptualmente es una clase abstracta, ya que no se crean instancias de la clase Inmueble.
*/
    private:
        int num_pisos;
        int num_habitaciones;
        int num_banos;
        bool jardin;
        bool cochera;
        bool en_privada;
    public:
        Casa();
        Casa(int num_pisos, int num_habitaciones, int num_banos, bool jardin, bool cochera, bool en_privada, float frente, float fondo, std::string ubicacion, float valor_catastral);

        int getNumPisos() const;
        int getNumHabitaciones() const;
        int getNumBanos() const;
        bool getJardin() const;
        bool getCochera() const;
        bool getEnPrivada() const;

        void setNumPisos(int);
        void setNumHabitaciones(int);
        void setNumBanos(int);
        void setJardin(bool);
        void setCochera(bool);
        void setEnPrivada(bool);
/*
14. Polimorfismo
En esta sección del código se puede apreciar el uso de polimorfismo.
El polimorfismo permite que una variable de tipo de clase base pueda apuntar 
a objetos de diferentes clases derivadas y, en tiempo de ejecución, 
invocar los métodos de la clase adecuada según el tipo real del objeto al que apunta.
En esta parte del código se puede apreciar el uso de polimorfismo en la función mostrarDatos() y precioVenta().
Ambas funciones se encuentran definidas en la clase Inmueble, pero se ejecuta la versión de la función que corresponde al tipo de inmueble que se está mostrando.
Se está utilizando polimorfismo en su forma override, ya que se está redefiniendo la función mostrarDatos() y precioVenta() en la clase Casa.
*/
        void mostrarDatos() override;
        void precioVenta() override;
};

#endif // CASA_H