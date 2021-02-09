#include<stdio.h>

int main()
{
    int n = 15 ;

    int nsp = 1 ;
    int nst = n/2 ;

    int row = 1 ;
    while(row <= n)
    {
        // work
        // stars
        for(int cst = 1 ; cst <= nst ; cst++)
            printf("* ") ;

        // spaces
        for(int csp = 1 ; csp <= nsp ; csp++)
            printf("  ") ;
     
        // stars
        for(int cst = 1 ; cst <= nst ; cst++)
            printf("* ") ;

        // update
        printf("\n") ;

        if(row <= n/2)
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