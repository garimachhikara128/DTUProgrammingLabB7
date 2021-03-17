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

    // 2d array display
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("%d\t", arr[r][c]) ;
        }

        printf("\n") ;
    }

    // 2d array wave print
    for(int c = 0 ; c < cols ; c++)
    {
        if(c % 2 == 0)
        {
            for(int r = 0 ; r < rows ; r++)
                printf("%d\t", arr[r][c]) ;
        }
        else
        {
            for(int r = rows - 1  ; r >= 0 ; r--)
                printf("%d\t", arr[r][c]) ;
        }
    }

    return 0 ;
}