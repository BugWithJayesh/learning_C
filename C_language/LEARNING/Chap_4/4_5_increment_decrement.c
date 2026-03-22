#include <stdio.h>

int main(){
    int i = 5; 
    printf("The value of i is %d\n", i); //5

    i = i + 5;
    printf("The value of i is %d\n", i); //5 + 5 = 10

    i++; 
    printf("The value of i is %d\n", i); //10 + 1 = 11 

    printf("The value of i is %d\n", i++); //i++ //11 = 11 + 1

    printf("The value of i is %d\n", ++i); //++i //(11 + 1 = 12) --> 12 + 1 = 13 

    i += 2; // also i = i + 2    // like that: +=, -=, *=, /=, &=, %=.
    printf("The value of i is %d\n", i); //13 + 2 = 15
    return 0;
}
    // i++ prints first and then  increment (post incremnet)
    // ++i increment first and then prints (pre incremnet)