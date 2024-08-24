#include <stdio.h>

void bsort(int arr[], int n, int (*operation)(int, int)){
    for(int i = n - 1; i >= 0; i--){
        for(int j = 1; j <= i; j++){
            if(operation(arr[j - 1], arr[j])){
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return;
}

int compLH(int x, int y){
    if(x > y){
        return 1;
    }
    return 0;
}

int compHL(int x, int y){
    if(x > y){
        return 0;
    }
    return 1;
}

int main(){
    int arr[5] = {1,5,2,4,3};
    bsort(arr, 5, compLH);
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
    bsort(arr, 5, compHL);
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
}