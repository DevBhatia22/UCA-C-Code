#include <stdio.h>

int main(){
        int num;
        scanf("%d", &num);
        printf("%d", (num >> 31) | (!(!num)));
        return 0;
}