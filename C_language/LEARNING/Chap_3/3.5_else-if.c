#include <stdio.h>

int main(){
    int age = 34;

    if (age >60){
        printf("You can Drive! You are a senior citizen.\n");
    }
    else if (age >18 ){
        printf("You can Drive!\n");
    }
    else {
        printf("You can not Drive!\n");
    }
    return 0;
}