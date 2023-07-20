#ifndef DATABASE_READER_H
#define DATABASE_READER_H

struct peliculas_series{
    std::vector<Pelicula> peliculas;
    std::vector<Serie> series;
    std::vector<std::string> peliculas_names;
    std::vector<std::string> series_names;
};

peliculas_series database_reader();

void set_episodes_to_series(std::vector<Serie> &series, std::vector<Episodio> &episodes);

#endif //DATABASE_READER_H
