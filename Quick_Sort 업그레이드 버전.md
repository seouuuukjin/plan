```
#include <iostream>
#include<time.h>
void swap(int arr[], int i, int j){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}
void insertion_sort(int arr[], int len){
	for(int i = 1;i <len; i++){
		for(int j=i; j>0; j--){
			if(arr[j] < arr[j-1])
				swap(arr, j, j-1);
		}
	}
}
void quicksort(int arr[], int start, int last){
    if(start == last)
    	return;
	if((last - start) < 6){
		insertion_sort(arr, last-start+1);
		return;
		
	}	
    int pivot = arr[start];
    int i = start + 1;
    int j = last;
    
    while(i<=j){
    	
        while(pivot >= arr[i])
            i++;
        while(pivot <= arr[j] && j > start)
            j--;
        if(i > j){
            swap(arr, start, j);
            break;
        }
        swap(arr, i, j);      
    }
    quicksort(arr, start, j-1);
    quicksort(arr, i, last);
}

int main()
{
    int arr[500];
    srand((int)time(NULL));
    for(int i=0; i<500; i++){
        arr[i] = rand() % 1000;
    }
    
    quicksort(arr, 0, 499);
    
    for(int i=0; i<500; i++){
        printf("!%d ", arr[i]);
    }
    
}
```
