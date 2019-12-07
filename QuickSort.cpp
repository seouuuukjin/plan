//g++  5.4.0

#include <iostream>
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
    int arr[10] ={3, 7, 8, 1, 5, 9, 6, 10 ,2, 4};
    quicksort(arr, 0, 9);
    
    for(int i=0; i<10; i++){
        printf("!%d ", arr[i]);
    }
    
}