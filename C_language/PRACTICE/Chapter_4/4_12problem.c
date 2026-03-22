/*Implement 10 using while loops.*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int i = 2;
    int prime = 1;
    if (n<=1)
    {
        prime = 0;
    }
    else if(n == 2){
        prime = 1;
    }
    else{
        do
        {
           if( n%i==0){
            prime = 0;
            break;
           }
           i++;
        } while (i < n);
        
    }
    if(prime){
        printf("%d is prime.\n", n);
    }
    else{
        printf("%d is Non-Prime.\n", n);
    }
    return 0;
}