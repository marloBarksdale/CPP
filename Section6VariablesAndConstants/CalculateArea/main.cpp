#include <iostream>

using namespace std;
int main()
{

    cout << "Enter width and length: ";
    int room_width{0};
    int room_length{0};
    cin >> room_width >> room_length;

    cout << room_length * room_width << " square feet" << endl;

    return 0;
}