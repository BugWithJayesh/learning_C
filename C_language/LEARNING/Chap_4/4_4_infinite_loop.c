#include <stdio.h>
        // I N F I N I T E    L O O P !
int main()
{
    int i = 0;

    while (i < 10) // always 0 < 10, infinite!
    {
        printf("yahhhhh!!!!!", i);
    }

    while (2 < 10) // universal truth!
    {
        printf("The value of i is %d\n", i);
        i++;  // i++ hoga lekin (2 < 10) to true hi hoga!
    }
    return 0;
}