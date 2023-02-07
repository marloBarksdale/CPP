#include <iostream>
using namespace std;

void mergeSort(int arr[], int l, int r);

void merge(int arr[], int l, int m, int r);
int main()
{

    int array[]{ 9, 8, 7, 6, 5, 4, 3, 4, 5, 6, 7, 8, 9, 6, 54, 32, 34, 5, 6 };

    mergeSort(array, 0, (sizeof(array) / sizeof(array[0]) - 1));
    
    
    
    for(auto i :array){
        cout<<i<<" ";
    }
    cout<<endl;
}

void mergeSort(int arr[], int l, int r)
{

    if(l < r) {

        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void merge(int arr[], int l, int m, int r)
{

    int Lsize = m - l+1;
    int Rsize = (r - m);

    int L[Lsize]{};
    int R[Rsize]{};

    for(int i = 0; i < Lsize; i++) {
        L[i] = arr[l + i];
    }

    for(int j = 0; j < Rsize; j++) {

        R[j] = arr[m + 1 + j];
    }

   

    int i = 0;
    int j = 0;
    while(i < Lsize && j < Rsize) {

        if(L[i] <= R[j]) {

            arr[l++] = L[i++];
        } else {
            arr[l++] = R[j++];
        }
    }

    while(i < Lsize) {

        arr[l++] = L[i++];
    }

    while(j < Rsize) {

        arr[l++] = R[j++];
    }
    
    
    
     for(int p : L) {
        cout << p << " ";
    }

    for(int p : R) {
        cout << p << " ";
    }
    cout << endl;
}