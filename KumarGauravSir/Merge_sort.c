#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int temp[], int left, int mid, int right) {
    for(int k = left; k <= right; k++) temp[k] = arr[k];

    int i = left;
    int j = mid + 1;
    for(int k = left; k <= right; k++) {
        if(i > mid) arr[k] = temp[j++];
        else if(j > right) arr[k] = temp[i++];
        else if(temp[i] <= temp[j]) arr[k] = temp[i++];
        else arr[k] = temp[j++];
    }
}

void merge_sort_r(int arr[], int temp[], int left, int right) {
    if(left >= right) return;
    int mid = (left + right) / 2;
    merge_sort_r(arr, temp, left, mid);
    merge_sort_r(arr, temp, mid+1, right);
    merge(arr, temp, left, mid, right);
}

void merge_sort(int arr[], int n) {
    int * temp = (int *) malloc(n * sizeof(int));
    merge_sort_r(arr, temp, 0, n-1);
    free(temp);
}

int main(){
    int arr[5] = {1,5,2,4,3};
    merge_sort(arr, 5);
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    return 0;
}