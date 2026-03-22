#include <stdio.h>

int main(){
    int n = 10;

    for (int i = 10; i; i--) //i > 0 (also correct)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    
    return 0;
}