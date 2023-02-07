#include <iostream>

using namespace std;

void swap(int* num1, int* num2);
int main()
{
    int x = 3;
    int y = 9;

    cout << "x:" << x << endl;
    cout << "y: " << y << endl;

    swap(&x, &y);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

void swap(int* num1, int* num2)
{

    int temp = *num1;

    *num1 = *num2;

    *num2 = temp;
}
