#include<stdio.h>

int main()
{

    int n = 5 ;
    int nsp = n-1 ;
    int nst = 1 ;

    int row = 1 ;
    while(row <= n)
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
        row = row + 1 ;
        nsp = nsp - 1 ;
        nst = nst + 1 ;

    }

    return  0 ;
}