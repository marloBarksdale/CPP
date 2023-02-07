#include <iostream>

using namespace std;

int main(){
   
    
    bool test_scores[8]{true,true,false,true};
    
    
    
    for(int i = 0; i <  (int)(sizeof(test_scores)/sizeof(test_scores[0]));i++){
        
    cout<<test_scores[i]<<endl;
    }
    cout<<test_scores[20]<<endl;
}