#ifndef MOVIE_HPP
#define MOVIE_HPP
#include <string>
#include <iostream>

class Movie
{

private:
    std::string name;
    std::string rating;
    int watch_count;

public:
    Movie(std::string n, std::string r, int w_c);
       
    

    const std::string getName()const ;
    const std::string getRating()const;
    int getWatchCount()const ;
    void increaseCount();
    
    //Copy Constructor
    Movie(const Movie& copy):name{copy.name},rating{copy.rating},watch_count{copy.watch_count}{
        std::cout<<"Copy constructor called"<<std::endl;
    }
    
   
};

#endif // MOVIE_HPP
