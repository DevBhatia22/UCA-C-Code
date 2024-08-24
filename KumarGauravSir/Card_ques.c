#include <stdio.h>
#include <string.h>

char* compare_value(char c1[], char c2[]){
    if(c1[0] > c2[0]){
        return c1;
    }
    else if(c1[0] < c2[0]){
        return c2;
    }
    else if(c1[1] > c2[1]){
        return c1;
    }
    return c2;
}

int compare_club(char c1[], char c2[]){
    if(c1[2] == c2[2]){
        return 1;
    }
    return 0;
}

int main(){
    char c1[3];
    return 0;
}