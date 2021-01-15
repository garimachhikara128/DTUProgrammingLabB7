#include<stdio.h>

int main()
{
    int arr[5] ;

    // update/set
    arr[0] = 10 ;
    arr[1] = 80 ;
    arr[2] = 15 ;
    arr[3] = 100 ;
    arr[4] = 70 ;

    // obtain/get
    printf("%d\n", arr[0]) ;
    printf("%d\n", arr[1]) ;
    printf("%d\n", arr[2]) ;
    printf("%d\n", arr[3]) ;
    printf("%d\n", arr[4]) ;

    // int i = 0 ;
    // while(i <= 4)
    // {
    //     printf("%d\n" , arr[i]) ;
    //     i++ ;
    // }

    for(int i = 0; i <= 4 ; i++)
    {
        printf("%d\n" , arr[i]) ;
    }


    return 0 ; 
}