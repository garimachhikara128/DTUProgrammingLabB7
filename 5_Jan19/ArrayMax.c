#include<stdio.h>
#include<limits.h>

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

    int max = arr[0] ;
    for(int i = 0 ; i <= n-1 ; i++)
    {
        if(arr[i] > max)
           max = arr[i] ; 
    }

    printf("Maximum of array is %d", max) ;
    
    return  0;

}