//g++  5.4.0

#include <iostream>
void swap(int arr[], int i, int j){
    int tmp;
    tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}
int main()
{
    int arr[10] = {1,10, 5, 8, 7, 6, 4, 3, 2, 9};
    int min, i, j;
    for(i=0; i<10; i++){
        min= 999999;
        for(int t=i; t<10; t++){
            if(arr[t] < min){
                min = arr[t];
                j = t;
            }
        }
        swap(arr, i, j);  
    }
    for(int i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}