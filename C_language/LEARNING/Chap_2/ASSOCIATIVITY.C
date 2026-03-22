#include <stdio.h>

int main()
{
    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value is %d\n", a*b/c); // output 2
    printf("The value is %d\n", 2*a/2*c  + 7*2 - 8);

    //2*a/2*c  + 7*2 - 8
    //6/2*c + 14 - 8
    //3*c + 14 - 8
    //27 + 14 - 8
    //41 - 8
    //33
    return 0;

}