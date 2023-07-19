#ifndef DATABASE_READER_H
#define DATABASE_READER_H

struct peliculas_series{
    std::vector<Pelicula> peliculas;
    std::vector<Serie> series;
};

peliculas_series database_reader();

#endif //DATABASE_READER_H
