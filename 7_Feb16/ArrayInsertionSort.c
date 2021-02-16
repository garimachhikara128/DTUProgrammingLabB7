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

    // insertion sorting
    for(int count = 1 ; count <= n-1 ; count++)
    {
        int item = arr[count] ;

        int j = count - 1 ;
        while(j >= 0 && arr[j] > item)
        {
            arr[j+1] = arr[j] ;
            j-- ;
        }
        arr[j+1] = item ;

    }
   
    // array display
    for(int i = 0 ; i <= n-1 ; i++)
        printf("%d\t" , arr[i]) ;
   
    return 0 ;
}