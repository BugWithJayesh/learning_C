#include <stdio.h>

int main(){
    int m1, m2, m3, m4, m5; 

        //Take input from user
    printf("Enter marks1: ");
    scanf("%d", &m1);
    printf("Enter marks2: ");
    scanf("%d", &m2);
    printf("Enter marks3: ");
    scanf("%d", &m3);
    printf("Enter marks4: ");
    scanf("%d", &m4);
    printf("Enter marks5: ");
    scanf("%d", &m5);
        
        //Print all Marks
    printf("The marks are: %d, %d, %d, %d, %d\n", m1,m2,m3, m4, m5);

        //If-Else statement
    if(m1<33 || m2<33|| m3<33){     //marks less than 33 & "||" is OR logic 
        printf("You are failed due to less marks in indivitual subject(s)!\n");
    }
    else if((m1 + m2 + m3 + m4 + m5)/5 < 40){       //(average of marks/no. of marks) is less than 40  
        printf("You are failed due to less percentage\n");
    }
    else{
        printf("You are Passed!\n");
    }
    return 0;
}