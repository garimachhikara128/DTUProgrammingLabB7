#include<stdio.h>

int main()
{
    int n ;

    // size 
    printf("No. of elements in array ?") ;
    scanf("%d", &n) ;

    // array create
    int arr[n] ;

    // array input -> array update
    for(int i = 0 ; i <= n-1 ; i = i + 1)
    {
        printf("arr[%d] : " , i) ;
        scanf("%d", &arr[i]) ;
    }

    // reverse order print
    for(int i = n-1 ; i >=0 ; i--)
    {
        printf("%d\t", arr[i]) ; 
    }

    return  0;

}