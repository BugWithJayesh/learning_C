//N u m b e r   G u e s s i n g   G a m e 
//Libraries
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //Random Number generator
    srand(time(0));
    int RandomNum = (rand()%100)+1;

    //variables
    int num_of_guesses = 0;
    int guessed_num;

    //loop
    do
    {
        printf("Guess The Number!\n");
        scanf("%d", &guessed_num);

        if(guessed_num > RandomNum){
            printf("Lower Number Please!\n");
        }
        else if(guessed_num < RandomNum){
            printf("Higher Number Please!\n");
        }
        else{
            printf("CONGRATES!\n");
        }
        num_of_guesses++;
    } while (guessed_num != RandomNum);

    printf("You Won!\nYou guessed the Number in %d Guesses.\n", num_of_guesses);
    
    return 0;
}