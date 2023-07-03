//David Ortiz Cota A01637391
#ifndef VIDEO_H
#define VIDEO_H

#include <string>

//En esta sección se declaran las clases y sus métodos
//Las clases son plantillas para generar objetos, en este caso de tipo Video
//Se utiliza encapsulamiento para proteger los atributos de la clase, asi como para mantener
//la información relevante a un video dentro de una clase, no solamente como variables sueltas
class Video{
    public:
        //En esta parte se definen los constructores de la clase, los cuales son métodos especiales (método especializado)
        //Cuya función es inicializar los atributos de la clase
        Video(std::string type, std::string name, std::string genre, int launch_year, int duration);
        Video(std::string type, std::string name, std::string genre, int grade, int launch_year, int duration);

        //show_info funciona parcialmente como un metodo accesor, ya que muestra en la terminal los valores de los atributos
        //sin embargo, no es un metodo accesor completo, ya que no retorna el valor de los atributos
        void show_info();

        //grade_video funciona como un metodo mutador, ya que modifica el valor de un atributo
        //en otras palabras, es un metodo modificador
        void grade_video(int grade);

    private:
        //En esta parte se definen los atributos de la clase, los cuales son variables que pertenecen a la clase
        std::string type;
        std::string name;
        std::string genre;
        int grade;
        int launch_year;
        int duration;
};

#endif // VIDEO_H