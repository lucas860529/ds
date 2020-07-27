#include <iostream>

using namespace std;


void InsertionSort(int *array, int size);
void QuickSort(int *array, int front, int end);

    
void PrintArray(int *array, int size){
    for (int i=0; i< size; i++) cout << array[i] << "->";
    cout << "%" << endl;
}

