#include<stdio.h>

int main()
{
    int n = 5 ;

    int nst = 1 ;

    int row = 1 ;
    while(row <= 2*n-1)
    {
        // work
        // stars
        for(int cst = 1; cst <= nst ; cst++)
        {
            printf("*") ;
        }

        // update
        printf("\n") ;
       
        if(row <= n-1)
            nst ++ ;
        else
            nst -- ;
        
        row++ ;


    }

    return  0 ;
}