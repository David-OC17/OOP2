#include<vector>
#include<string>

#include "../clase2/video_all/video.h"

class Serie : public Video {
private:
    std::vector<std::string> creators;
    int num_seasons;

public:
    Serie(std::string name, std::string genre, int launch_year, int duration, std::vector<std::string> creators, int num_seasons);
    void show_info() override;
    // Additional methods specific to series
    void addCreator(std::string creator);
    void setNumSeasons(int numSeasons);
};
