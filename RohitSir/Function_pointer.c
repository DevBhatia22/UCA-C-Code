#include <stdio.h>

int add(int a, int b){
    return a + b;
}
int subtract(int a, int b){
    return a - b;
}
int multiply(int a, int b){
    return a * b;
}
float divide(int a, int b){
    return a / b;
}
void performOperation(int (*operation)(int, int), int a, int b){
    printf("%d \n", operation(a, b));
    return;
}

int main(){
    performOperation(add, 1, 2);
    performOperation(subtract, 1, 2);
    performOperation(multiply, 1, 2);
    performOperation(divide, 1, 2);
}