//David Ortiz Cota A01637391
#ifndef VIDEO_H
#define VIDEO_H

#include <string>

class Video{
    private:
        std::string type;
        std::string name;
        std::string genre;
        float grade;
        int launch_year;
        int duration;

    public:
        Video();
        Video(std::string type, std::string name, std::string genre, int launch_year, int duration, float grade);

        virtual void muestraDatos();

        //Getters y setters
        std::string get_type();
        std::string get_name();
        std::string get_genre();
        float get_grade();
        int get_launch_year();
        int get_duration();

        void set_type(std::string type);
        void set_name(std::string name);
        void set_genre(std::string genre);
        void set_launch_year(int launch_year);
        void set_duration(int duration);
        
        void grade_video(float grade);
        Video operator+(float grade);
};

#endif // VIDEO_H