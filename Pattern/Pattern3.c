#include<stdio.h>

int main()
{

    int n = 5 ;
    int nst = n ; // look at the first row

    int row = 1 ;
    while(row <= n)
    {
        // work
        for(int col = 1 ; col <= nst ; col++)
            printf("*") ;

        // modify
        printf("\n") ;
        row = row + 1 ;
        nst = nst - 1 ;
    }

    return 0 ;

}