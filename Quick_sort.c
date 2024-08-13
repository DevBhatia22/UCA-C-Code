#include <stdio.h>
#include <stdlib.h>

void quick_sort(int* arr, int left, int right){
    if(left >= right) return;
    
    int p = arr[left];
    int i = left + 1;
    
    for(int j = i; j < right; j++){
        if(arr[j] < p){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    int temp = arr[i - 1];
    arr[i - 1] = arr[left];
    arr[left] = temp;
    quick_sort(arr, left, i - 2);
    quick_sort(arr, i, right);
}

int main(){
    int arr[5] = {1,5,2,4,3};
    quick_sort(arr, 0, 5);
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    return 0;
}