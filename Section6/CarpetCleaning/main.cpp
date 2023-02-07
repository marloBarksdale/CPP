#include <iostream>

using namespace std;
double total_price_per_room_type(int number_of_rooms, double price);
int main(){
    
    const double days_valid {30};
    
    
    cout<<"Enter the number of small rooms you want cleaned: ";
    int num_of_small_rooms{0};
    cin>>num_of_small_rooms;
    
    cout<<"Enter the number of large rooms you want cleaned: ";
    int num_of_large_rooms{0};
    cin>>num_of_large_rooms;
    
    
    cout<<"Estimate for carpet cleaning service"<<endl;
    
    cout<<"Number of small rooms: "<<num_of_small_rooms<<endl;
    cout<<"Number of large rooms: "<<num_of_large_rooms<<endl;
    
    cout<<"Price per small room: $"<<price_of_small_rooms<<endl;
    
    cout<<"Price per large room: $"<<price_of_large_rooms<<endl;
    const double price_of_small_rooms {25};
    const double price_of_large_rooms {35};
    
    double total_price = total_price_per_room_type(num_of_small_rooms,price_of_small_rooms)
                        +total_price_per_room_type(num_of_large_rooms,price_of_large_rooms);
    
    const double sales_tax {0.06};//6% sales tax
    
    
    cout<<"Cost: $"<< total_price<<endl;
    cout<<"Tax: $"<<total_price*sales_tax<<endl;
    cout<<"========================================================"<<endl;
    
    
    cout<<"Total estimate: $"<<total_price+(total_price*sales_tax)<<endl;
    cout<<"This estimate is valid for "<<days_valid<<" days"<<endl;
    
    
    
}



double total_price_per_room_type(int number_of_rooms, double price){
    
    
    
    
    return number_of_rooms*price;
    
}