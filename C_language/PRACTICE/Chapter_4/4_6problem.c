// Write a program to implement program 5 using ‘for’ and ‘do-while’ loop

#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;

    // U S I N G   D O - W H I L E   L O O P
    //  do{
    //      sum += i;
    //      i++;
    //  }while (i<=10);

    // U S I N G   F O R   L O O P
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }

    printf("The sum of First 10 natural number is %d:\n", sum);
    return 0;
}