#include <stdio.h>

int main(){
    int i;
    for(i = 5; i; i--)
        printf("%d\n", i);
    return 0;
}
// if only one line in the loop no need to use curly braces.
//we intialize "i" outside of loop also.
/*here 
i = 5; i = positive value, than print.
i = 5 - 1 ==> 4; i = positive, print.
i = 4 - 1 ==> 3; i = positive, print.
i = 3 - 1 ==> 2; i = positive, print.
i = 2 - 1 ==> 1; i = positive, print.
i = 1 - 1 ==> 0; i = negative, This for loop will exit.
*/