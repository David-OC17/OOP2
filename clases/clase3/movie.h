#include<vector>
#include<string>

#include "../clase2/video_all/video.h"

class Movie : public Video {
private:
    std::string director;
    std::vector<std::string> actors;

public:
    Movie(std::string name, std::string genre, int launch_year, int duration, std::string director, std::vector<std::string> actors);
    void show_info() override;
    // Additional methods specific to movies
    void setDirector(std::string director);
    void addActor(std::string actor);
};
