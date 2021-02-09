#include<stdio.h>

int main()
{
    int n = 6 ;

    int nsp = 0 ;
    int nst = n ;

    int row = 1 ;
    while(row <= 2*n-1)
    {
        // work
        // spaces
        for(int csp = 1 ; csp <= nsp ; csp++)
            printf("  ") ;
     
        // stars
        for(int cst = 1 ; cst <= nst ; cst++)
            printf("* ") ;

        // update
        printf("\n") ;

        if(row <= n-1)
        {
            nsp += 2 ;
            nst -- ;
        }
        else
        {
            nsp -= 2 ;
            nst ++ ;
        }

        row++ ;

    }

    return 0 ;
}