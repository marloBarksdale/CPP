#include <iostream>
using std::string;
using std::cin;
using std::cout;

int main(){
    
    cout<<"Please enter your name: ";
    string first_name;
    
    cin>>first_name;
    
   
    string friend_name;
    
    
    cout<<"Please enter your firend's name: ";
    cin>>friend_name;
    
    char friend_sex = 0;
    
    cout<<"Enter \"m\" for male and \"f\" for female: ";
    
    std::cin>>friend_sex;
    
    
    
    string sex = friend_sex=='m'?"him ":"her ";
    
    
     cout<<"Dear "<<first_name<<", \n\t"
            <<"How are you? I really miss you. Have you seen "<<friend_name<<" lately?\n"
            << "If you see "<<friend_name<<" please ask "<<sex<<"to call me\n";
    
    return 0;
    
}