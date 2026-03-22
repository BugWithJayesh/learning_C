#include <stdio.h>

int main(){
    int i;
    for(i = 0; i <= 15; i++)
    {
        if(i == 6){
            //break; //Exit the loop now!
            continue; //skip the ittretion now! 
            // Means,When i = 6, leave this block of code and go for the next.
        }
        printf("i is %d\n", i);
    }
    printf("Done! Loop is Exit.\n");
    return 0;
}