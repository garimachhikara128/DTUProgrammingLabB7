#include<stdio.h>

int main()
{
    int n = 15 ;

    int nsp = n/2 ;
    int nst = 1 ;

    int row = 1 ;
    while(row <= n)
    {
        // work
        // spaces
        for(int csp = 1 ; csp <= nsp ; csp++)
            printf("* ") ;
     
        // stars
        for(int cst = 1 ; cst <= nst ; cst++)
            if(cst == 1 || cst == nst)
                printf("* ") ;
            else
                printf("  ") ;

        for(int csp = 1 ; csp <= nsp ; csp++)
            printf("* ") ;

        // update
        printf("\n") ;

        if(row <= n/2)
        {
            nsp -- ;
            nst += 2 ;
        }
        else
        {
            nsp ++ ;
            nst -= 2;
        }

        row++ ;

    }

    return 0 ;
}