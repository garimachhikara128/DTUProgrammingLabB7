#include<stdio.h>

int main()
{

    int n = 9 ;

    int row = 1 ;
    while(row <= n)
    {
        // work
        for(int col = 1 ; col <= n ; col++)
        {
            if(row == col || row + col == n+1)
                printf("*") ;
            else
                printf(" ") ;
        }
           

        // changes when you move from one row to another
        row = row + 1 ;
        printf("\n") ;
    }

    return  0 ;
}