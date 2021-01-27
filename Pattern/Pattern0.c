#include<stdio.h>

int main()
{
   
    int n = 5 ;

    int row = 1 ;
    while(row <= n)
    {
        // work
        printf("*") ;

        // modify
        row = row + 1 ;
        printf("\n") ;
    }

    return 0 ;
}