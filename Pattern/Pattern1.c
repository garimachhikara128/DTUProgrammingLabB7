#include<stdio.h>

int main()
{

    int n = 5 ;

    int row = 1 ;
    while(row <= n)
    {
        // work
        for(int col = 1 ; col <= n ; col++)
            printf("*") ;

        // changes when you move from one row to another
        row = row + 1 ;
        printf("\n") ;
    }

    return  0 ;
}