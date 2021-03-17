#include<stdio.h>

int main()
{
    int rows, cols ;

    printf("Rows and Cols ?") ;
    scanf("%d %d", &rows, &cols) ;

    int arr[rows][cols] ;

    // 2d array input
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("arr[%d][%d] ? ", r, c) ;
            scanf("%d", &arr[r][c]) ;
        }
    }

    // lower
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            if(c > r)
                printf("0\t") ;
            else
                printf("%d\t", arr[r][c]) ;
        }

        printf("\n") ;
    }

    return 0 ;
}