#include "Movies.hpp"

void Movies::addMovies(std::string name, std::string rating, int watch_count)
{

    if(movies.size() == 0) {

        Movie newMovie{ name, rating, watch_count };
        movies.push_back(newMovie);
        return;
    }

    for(Movie m : movies) {
        if(m.getName() == name) {

            std::cout << "This movie is already in your list" << std::endl;
            return;
        }
    }

    Movie newMovie{ name, rating, watch_count };
    movies.push_back(newMovie);
}

std::string Movies::getMovies()
{

    if(movies.size() == 0) {
        return NULL;
    }

    std::string allMovies{};

    for(Movie m : movies) {

        allMovies += m.getName() + " " + m.getRating() + " " + std::to_string(m.getWatchCount()) + "\n";
    }

    return allMovies;
}

void Movies::increaseCount(std::string name)
{

    if(movies.size() == 0) {
        std::cout << "Movie list is empty" << std::endl;
        return;
    }

    for(Movie m : movies) {
        if(m.getName() == name) {
            m.increaseCount();
            std::cout << m.getName() + " watch count increased to " + std::to_string(m.getWatchCount()) + "\n";

            return;
        }
    }
    std::cout << name + " was not found in the list." << std::endl;
    return;
}