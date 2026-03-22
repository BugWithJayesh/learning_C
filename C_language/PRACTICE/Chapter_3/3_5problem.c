#include <stdio.h>

/* Write a program to determine whether a character entered by the user is
lowercase or not. */
//97 to 122 is lower case ASCII values.

//  https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

int main(){
    char ASCII;

    printf("Enter a Character: ");
    scanf("%c", &ASCII);

    printf("The ASCII value of this CAHARCTER is: %d\n", ASCII);

    if(ASCII >= 97 && ASCII <= 122){
        printf("This Character is LOWER CASE!\n");
    }
    else{
        printf("This Character is not a LOWER CASE.\n");
    }
    return 0;
}