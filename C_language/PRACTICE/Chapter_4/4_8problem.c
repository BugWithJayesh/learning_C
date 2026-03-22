/*Write a program to calculate the factorial of a given number using a for loop.*/
    //factorial 
        // 8! = 8 X 7 X 6 X 5 X 4 X 3 X 2 X 1  
        // 3! = 3 X 2 X 1 
        //0! = 1
        //n! = 1 X 2 X 3 X 4 X ......... X n

    #include <stdio.h>
    
    int main(){
        int product = 1;
        int n;
        printf("Enter The number:");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            product *= i; //1 = 1 * i (where, i = 1 to n)
        }
        printf("The factorial of the given number is %d\n", product);
        
        return 0;
    }