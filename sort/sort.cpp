#include "sort.h"
#include <iostream>

using namespace std;


void InsertionSort(int *array, int size) {

    //從i=1開始 因為i=0只有一個元素不需要排 
    for (int i = 1; i < size; i++) {
        int key = array[i]; // 要記起來不然會被蓋掉〕
        // insert i
        int j = i-1;
        while(array[j] > key && j >= 0) {
                //往後調整
                array[j+1] = array[j];
                j--;
        }

        array[j+1] = key;
    }
}

//http://alrightchiu.github.io/SecondRound/comparison-sort-quick-sortkuai-su-pai-xu-fa.html
void QuickSort(int *array, int front, int end) {
    int size = end - front + 1;
    if (size <= 1) return;
    int pivot = array[end]; // the last is pivot
    int i = front -1; 
    // i代表比pivot小的array的top j代表比pivot小的array的top 等於是兩個array
    for(int j = 0; j < size-1; j++) { // 
        if (array[j] < pivot) {
            // ++i 就是 j代表的array的尾端 所以一定會換到比pivot大的
            swap(array[++i], array[j]);
        }
    }

    swap(array[++i], array[end]); // set pivot to middle

    QuickSort(array, front, i-1);
    QuickSort(array, i+1, end);
    
}


void _merge(int *array, int front, int mid, int end) {
    int lsize = mid-front+1;
    int rsize = end-mid;

    if (lsize <= 0 || rsize <= 0) return;

    int *lsub = new int[lsize + 1];
    int *rsub = new int[rsize + 1];

    int j = front;
    for (int i = 0; i <lsize; i++) lsub[i] = array[j++];
    j = mid + 1;
    for (int i = 0; i <rsize; i++) rsub[i] = array[j++];

    rsub[rsize] = 2147483647;
    lsub[lsize] = 2147483647;

    int r = 0;int l = 0;
    j = front;
    for (int i = 0; i < lsize + rsize; i++) {
        if (lsub[l] < rsub[r]) {
            array[j++] = lsub[l++];
        } else {
            array[j++] = rsub[r++];
        }
    }

}

void MergeSort(int *array, int front, int end) {
    int size = end - front + 1;
    if (size <= 1) return;
    if (size == 2) {
        if (array[front] > array[end]) swap(array[front], array[end]);
        return;
    }
    int mid = size/2;
    cout << mid << endl;
    MergeSort(array, front, mid);
    MergeSort(array, mid+1, end);
    _merge(array, front, mid, end);

}