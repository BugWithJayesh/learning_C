#include <stdio.h>

int main(){
    int a=1, b=1;

    printf("The value of a and b is %d\n", a&&b); //both 1
    printf("The value of a and b is %d\n", a||b); //atleast any 1
    printf("The value of NOT(a) is %d\n", !a); //false --> true OR true --> false

    if(a && b)
    {
        printf("Both are true!\n");
    }
    //OR
    if(a){
        if(b){
            printf("Both are true!\n");
        }
    }
    return 0;
}