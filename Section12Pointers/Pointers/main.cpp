#include <iostream>
using namespace std;
int main()
{

    
    auto num {10};
    
    int *p{nullptr};
    
    p = &num;
    
    
    string x = "powers";
    
    cout << x.size()<<endl;
    
    cout<<sizeof p<<endl;
    
    cout<<&num<<endl;
    
    cout<<p<<endl;
}