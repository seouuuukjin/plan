#include<iostream>

void swap(int arr[], int i, int j){
    int tmp;
    tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

int main(){
    
    int i, j;
    int arr[10] = {1, 10, 5, 8, 4, 2, 9 ,3, 6 ,7};
    for(i=1; i<10; i++){
        for(int t= i; t > 0; t--){
            if(arr[t] < arr[t-1])
                swap(arr, t ,t-1);
        }
    }
    for(int i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}