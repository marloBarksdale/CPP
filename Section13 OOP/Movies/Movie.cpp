
#include "Movie.hpp"

#include <iostream>

Movie::Movie(std::string n, std::string r, int w_c)
    : name{ n }
    , rating{ r }
    , watch_count{ w_c }
{
}

const std::string Movie::getName() const { return name; }
const std::string Movie::getRating() const { return rating; }
int Movie::getWatchCount() const { return watch_count; }
void Movie::increaseCount()  { this->watch_count++; }
