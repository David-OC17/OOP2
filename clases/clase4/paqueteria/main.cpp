//David Ortiz Cota A01637391
#include "envio.h"
#include "paquete.h"
#include "sobre.h"

#include <iostream>
#include <string>

int main(){
    //Los dos constructores de las clases paquete y sobre
    //sobre::sobre(std::string nombre, std::string direccion, std::string ciudad, std::string estado, int cp_remitente, int cp_destinatario, double costo, float largo, float ancho, float costo_por_kg)
    //paquete::paquete(std::string nombre, std::string direccion, std::string ciudad, std::string estado, int cp_remitente, int cp_destinatario, double costo, float peso, float largo, float ancho, float alto, float costo_por_kg)

    paquete p1("Rodrigo García", "Av.Patria 123", "Guadalajara", "Jalisco", 7846, 45050, 100.0, 10.0, 10.0, 10.0, 10.0, 10.0);
    sobre s1("Juan Pedro", "Av.Vallarta 123", "Guadalajara", "Jalisco", 20201, 48110, 100.0, 10.0, 10.0, 10.0);

    //Mostrando el nombre del destinatario de cada objeto, la dirección del destinatario y el costo de envío
    std::cout << "Nombre del destinatario de p1: " << p1.getNombre() << std::endl;
    std::cout << "Dirección del destinatario de p1: " << p1.getDireccion() << std::endl;
    std::cout << "Costo de envio de p1: " << p1.calculaCosto() << std::endl << std::endl;

    std::cout << "Nombre del destinatario de s1: " << s1.getNombre() << std::endl;
    std::cout << "Dirección del destinatario de s1: " << s1.getDireccion() << std::endl;
    std::cout << "Costo de envio de s1: " << s1.calculaCosto() << std::endl;

    //Mostrando un ejmeplo en el cual se exceden las dimensiones máximas de un sobre
    sobre s2("Rodrigo García", "Av.Vallarta 123", "Guadalajara", "Jalisco", 45050, 45050, 100.0, 50, 100, 1.0);
    std::cout << "Costo de envio de s2: " << s2.calculaCosto() << std::endl;

    return EXIT_SUCCESS;
};