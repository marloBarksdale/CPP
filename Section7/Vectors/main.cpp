#include <iostream>

#include <vector>
#include <cstring>
using namespace std;
void triangle(int i);


int main(){
    
   
   triangle(100);
    
}




void triangle(int i){
    
    
  if(i<1){
      
      
 
      return;
  }
    
    
    for(int x=0; x<i; x++){
        cout<<x+1;
    }  cout<<endl;
    
    triangle(i-1);
    
    for(int x=0; x<i; x++){
        cout<<x+1;
    }
    cout<<endl;
    
   


}


