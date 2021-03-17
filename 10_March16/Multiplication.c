#include<stdio.h>

int main()
{
    int r1, c1 ;

    printf("Rows and Cols for First Matrix ?") ;
    scanf("%d %d", &r1, &c1) ;

    int one[r1][c1] ;

    // 2d array input
    for(int r = 0 ; r < r1 ; r++)
    {
        for(int c = 0 ; c < c1 ; c++)
        {
            printf("one[%d][%d] ? ", r, c) ;
            scanf("%d", &one[r][c]) ;
        }
    }

    int r2, c2 ;

    printf("Rows and Cols for Second Matrix ?") ;
    scanf("%d %d", &r2, &c2) ;

    int two[r2][c2] ;

    // 2d array input
    for(int r = 0 ; r < r2 ; r++)
    {
        for(int c = 0 ; c < c2 ; c++)
        {
            printf("two[%d][%d] ? ", r, c) ;
            scanf("%d", &two[r][c]) ;
        }
    }

    int res[r1][c2] ;

    for(int r = 0 ; r < r1 ; r++)
    {
        for(int c = 0 ; c < c2 ; c++)
        {
            int sum = 0 ;
            for(int k = 0 ; k < c1 ; k++)
            {
                sum += one[r][k] * two[k][c] ;
            }
            res[r][c] = sum ;
            printf("%d\t", res[r][c]) ;
        }

        printf("\n") ;
    }

    return 0 ;
}