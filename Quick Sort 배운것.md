'''c++
#include <iostream>
#include<time.h>
#include<stdlib.h>
void swap(int arr[], int i, int j){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}
void quicksort(int arr[], int start, int last){
    int pivot = arr[start];
    int i = start + 1;
    int j = last;
    
    while(i<=j){
        while(pivot > arr[i])
            i++;
        while(pivot < arr[j])
            j--;
        if(i >= j){
            swap(arr, start, j);
            break;
        }
        swap(arr, i, j);      
    }
    if(start < (j-1))
        quicksort(arr, start, j-1);
    if(i < last)
        quicksort(arr, i, last);
}

int main()
{
    int arr[50];
    printf("!!!");
    srand((int)time(NULL));
    printf("~\n");
    for(int i=0; i<50; i++){
        arr[i] = rand() % 100;
    }
    printf("~\n");
    
    quicksort(arr, 0, 49);
    
    for(int i=0; i<50; i++){
        printf("!%d ", arr[i]);
    }
    
}
'''
