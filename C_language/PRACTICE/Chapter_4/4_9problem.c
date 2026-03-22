//Repeat 8 using while loop.

    #include <stdio.h>
    
    int main(){
        int product = 1;
        int n, i = 1;
        printf("Enter The number:");
        scanf("%d", &n);

        while(i<=n) // Condition
        {
            product *= i; //1 = 1 * i (where, i = 1 to n)
            i++; //update i 
        }
        printf("The factorial of %d is %d\n",n, product); //print the answer
        
        return 0;
    }