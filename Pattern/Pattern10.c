#include<stdio.h>

int main()
{

    int n = 5 ;
    int nsp = 0 ;
    int nst = 2*n-1 ;

    int row = 1 ;
    while(row <= n)
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
        row = row + 1 ;
        nsp = nsp + 1 ;
        nst = nst - 2 ;

    }

    return  0 ;
}