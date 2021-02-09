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

    // selection sorting
    for(int count = 0 ; count <= n-2 ; count++)
    {
        int minidx = count ;

        for(int j = count + 1 ; j <= n-1 ; j++)
        {
            if(arr[j] < arr[minidx])
                minidx = j ;
        }

        // count <-> minidx
        int temp = arr[count] ;
        arr[count] = arr[minidx] ;
        arr[minidx] = temp ;

    }

    // array display
    for(int i = 0 ; i <= n-1 ; i++)
        printf("%d\t" , arr[i]) ;
   
    return 0 ;
}