#include "sort.cpp"

int main(int argc, char const *argv[])
{
    int a[5] = { 1,3,5,2,4 };
    //QuickSort(a, 0, 4);
    MergeSort(a, 0, 4);
    PrintArray(a, 5);
    return 0;
}