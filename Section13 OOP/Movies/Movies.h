#ifndef MOVIES_H
#define MOVIES_H
#include <Movie.cpp>
#include <vector>

class Movies
{
private:
    std::vector<Movie> movies;

public:
    Movies();

    ~Movies();
    void addMovie(Movie addition);
};

#endif // MOVIES_H
