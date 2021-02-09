#include<stdio.h>

int main()
{
    int n = 7 ;

    int nst = n ;
    int nsp = -1 ;

    int row = 1;
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
        int cst = 1 ;
        
        if(row == 1)
            cst = 2 ;

        for( ; cst <= nst ; cst++)
            printf("* ") ;

        // update
        printf("\n") ;
        nst -- ;
        nsp += 2 ;
        row++ ;

    }

    return  0 ;
}