#ifndef MOVIES_HPP
#define MOVIES_HPP
#include "Movie.hpp"

#include <string>
#include <vector>

class Movies
{

private:
    std::vector<Movie> movies;

public:
    void addMovies(std::string name, std::string rating, int watch_count);
    std::string getMovies();
    void increaseCount(std::string);
};

#endif // MOVIES_HPP
