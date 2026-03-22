#include <stdio.h>

int main()
{
    int a;

    printf("Enter a:");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("You entered 1\n");
        break;
    case 2:
        printf("You entered 2\n");
        break;
    case 3:
        printf("You entered 3\n");
        break;
    case 4:
        printf("You entered 4\n");
        break;
        default:
        printf("Nothing matched!\n");
        break;
    }

    // all case true, when any of case is true all coming statement will also exicute.
    //WE need to add "break" state.
}