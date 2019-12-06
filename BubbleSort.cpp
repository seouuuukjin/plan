#include<iostream>

void swap(int arr[], int i, int j){
    int tmp;
    tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}
void arr_print(int arr[], int len){
    for(int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[10] = {1, 10, 4, 5, 2, 3, 7, 9, 8, 6};
    
    for(int i =10; i>0;i--){
        for(int j=0; j<i-1; j++){
            if(arr[j] > arr[j+1])
                swap(arr, j, j+1);
        }
    }
    arr_print(arr, 10);
    return 0;
}