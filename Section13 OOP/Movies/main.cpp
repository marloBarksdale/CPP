#include <iostream>
#include "Movies.hpp"

#include <iostream>
using namespace std;
int main(){
   
    
    Movies myList;
    
    
    myList.addMovies("Jojo", "POG", 13);
    myList.addMovies("Jojo", "POG", 13);
    myList.addMovies("Bread", "M-A", 12);
    
    cout<<myList.getMovies();
    myList.increaseCount("Jojo");
    myList.increaseCount("JAH");
    cout<<myList.getMovies();
    
}