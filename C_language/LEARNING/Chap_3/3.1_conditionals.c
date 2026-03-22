#include <stdio.h>

int main()
{
    int age = 5;

    if (age > 10)
    {
        printf("Your age is greater than 10\n");
    }
    if (age % 5 == 0) // age%5 is remainder when age is devided by 5 
    {
        printf("Your age is divisible by 5\n");
    }

    return 0;
}