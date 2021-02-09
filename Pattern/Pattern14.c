#include<stdio.h>

int main()
{
    int n = 4 ;

    int nsp = n-1 ;
    int nst = 1 ;

    int row = 1 ;
    while(row <= 2*n-1)
    {
        // work
        // spaces
        for(int csp = 1 ; csp <= nsp ; csp++)
            printf(" ") ;
     
        // stars
        for(int cst = 1 ; cst <= nst ; cst++)
            printf("*") ;

        // update
        printf("\n") ;

        if(row <= n-1)
        {
            nsp -- ;
            nst ++ ;
        }
        else
        {
            nsp ++ ;
            nst -- ;
        }

        row++ ;

    }

    return 0 ;
}