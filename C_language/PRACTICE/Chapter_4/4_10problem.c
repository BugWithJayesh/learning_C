// Write a program to check whether a given number is prime or not using loops
// A Prime Number is a no. who's only devided by 1 and own.
// ex: 3 --> 3/3 (only)
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Num:");
    scanf("%d", &n); // taking Input

    int prime = 0; // 0 = prime, 1 = non-prime

    if (n == 0 || n == 1)
    {
        prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++) // i=2, because of prime's defination.   // ye loop (n-1) tak chalega
        {
        if (n % i == 0)                  // for checking the condition //(n!=2)--> 2 bhi prime value h!,
                                         //  but condition me 2 i=2 se devid ho jata h (jisse 2 non prime show hota h )
            {
                prime = 1; // if i is divided by 2 to n-1, that means its not a prime no.
                break;     // jese hi devide hua break kar do.
            }
        }
    }
    if (prime) // In 'C' all values (not 0) are true. so this condition will true and,
    {
        printf("%d is not prime.\n", n); // This line will be print.
    }
    else
    {
        printf("%d is prime.\n", n); // either this line will print.
    }
    return 0;
}