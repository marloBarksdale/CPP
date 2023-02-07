#include <iostream>

using namespace std;

int* apply_all(int arr1[], int size1, int arr2[], int size2);

int main()
{

    int arr1[]{ 10, 20, 30 };
    int arr2[]{ 1, 2, 3, 4, 5 };

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int* newArray = apply_all(arr1, size1, arr2, size2);


    for(int i = 0 ; i < size1*size2; i++){
        cout<<newArray[i]<<" ";
    }
    cout << endl;

    delete[] newArray;
}

int* apply_all(int arr1[], int size1, int arr2[], int size2)
{

    int* newArray = new int[size1 * size2];

    int count = 0;
    for(int i = 0; i < size1; i++) {
    
        cout<<i<<endl;
        for(int j = 0; j < size2; j++) {
            newArray[count++] = arr1[i] * arr2[j];
        }
    }

    return newArray;
}