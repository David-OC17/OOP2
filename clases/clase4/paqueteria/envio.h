#ifndef ENVIOS_H
#define ENVIOS_H

#include <iostream>
#include <string>

class envio{
    private:
        std::string nombre;
        std::string direccion;
        std::string ciudad;
        std::string estado;
        int cp_remitente;
        int cp_destinatario;

        double costo;

    public:
        envio();
        envio(std::string nombre, std::string direccion, std::string ciudad, std::string estado, int cp_remitente, int cp_destinatario, double costo);
        
        //Setter and getter for all
        void setNombre(std::string);
        std::string getNombre();

        void setDireccion(std::string);
        std::string getDireccion();

        void setCiudad(std::string);
        std::string getCiudad();

        void setEstado(std::string);
        std::string getEstado();

        void setCpRemitente(int);
        int getCpRemitente();

        void setCpDestinatario(int);
        int getCpDestinatario();

        void setCosto(double);
        double getCosto();

        //Method to calculate the cost of the shipment
        float calculaCosto();
};

#endif // "ENVIOS_H"