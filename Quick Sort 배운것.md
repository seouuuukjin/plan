```c++

#include <iostream>
#include<time.h>
#include<stdlib.h>
void swap(int arr[], int i, int j){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}
void quicksort(int arr[], int start, int last){
    int pivot = arr[start]; //개선의 여지 1 : pivot을 시작,중간,끝 세점을 잡아서 중간값으로 하면 더 효율적이다.
    /*
    여기에다가 원소가 1개인 배열일 경우 그대로 둔다는 조건문을 두면 more효율적
    */
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
    
    if(start < (j-1)) //이거랑
        quicksort(arr, start, j-1);
    if(i < last) // 이거처럼 원소하나인거 거르는 이프문 두개보다는 위에 함수 시작하자마자 두는게 좋다.
        quicksort(arr, i, last);
    //또한 이렇게 보다는 원소의 개수가 6개정도 이하로떨어지면 삽입정렬을 적용시키는게 좋다.
}

int main()
{
    int arr[50];
    srand((int)time(NULL));
    for(int i=0; i<50; i++){ //arr에 0~99사이의 숫자 랜덤하게 집어넣기
        arr[i] = rand() % 100;
    }
    quicksort(arr, 0, 49);
    
    for(int i=0; i<50; i++){
        printf("!%d ", arr[i]);
    }
    
}
```
