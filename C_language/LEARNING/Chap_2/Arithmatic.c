#include <stdio.h>

int main()
{
    int a, b, c;
    a = 5;
    b = 2;
    c = a + b;
    printf("The value of a is %d, the value of b is %d and the sum of both is %d\n", a, b, c);

    // The madulas operator is used to get the remainder.
    printf("The remainder when a is divided by b is: %d\n", a % b);
    
    //this doesn't work in exponentiation in C
    //int e = b ^ a; //wrong
    

    return 0;
}
