#include <stdio.h>

void exchange(int arr[], int i, int j){
    int temp = arr[i];

    arr[i] = arr[j];
    arr[j] = temp;
}

void selection_sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[min] > arr[j]) min = j;
        }
        exchange(arr, i, min);
    }
}

int main(){
    int arr[5] = {1,5,2,4,3};
    selection_sort(arr, 5);
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    return 0;
}