#include <stdio.h>

int main()
{
    int i = 10; // Initialization and declaration
    int j;
    j = i;
    int a=2, b=3, c=4, d=5;
    float x, y, z;
    x = y = z = 3.8;

    //%d is a format specifier
    //%d = int, %f = float, %c = char
    printf("The value of i is %d and the value of j is %d\n", i, j);
    printf("The value of a is %d and the value of b is %d\n", a, b );
    printf("The value of c is %d and the value of d is %d\n", c, d);
    printf("The value of x is %f and the value of y is %f and z is %f\n", x, y, z);

    return 0;
}
