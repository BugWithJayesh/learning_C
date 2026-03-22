/*Implement 10 using while loops.*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Num:");
    scanf("%d", &n);

    int prime = 1;
    if (n<=1)
    {
        prime = 0;
    }

    else
    {
        int i = 2;
        while (i < n)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
            i++;
        }
    }
    if (prime)
    {
        printf("%d is prime.\n", n);
    }
    else
    {
        printf("%d is non-prime.\n", n);
    }
    return 0;
}