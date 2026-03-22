#include <stdio.h>

int main()
{
    /*Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop
counter is initialized to 0.*/
    int i = 0;

    while (i <= 20) //loop run whenever i <= 20
    {
        if (i >= 10) //when i >= 10, it is true and the line will be print.
        {
            printf("THe value is %d\n", i);
        }
        i++; // for update the value of i
    }

    return 0;
} 