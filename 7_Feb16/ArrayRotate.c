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

    int rot ;

    printf("Enter the no. of rotations ?") ;
    scanf("%d", &rot) ;

    for(int r = 1 ; r <= rot ; r++)
    {
        // single rotation
        int temp = arr[n-1] ;

        for(int j = n-1 ; j >= 1 ; j--)
            arr[j] = arr[j-1] ;

        arr[0] = temp ;
    }
    
    // array display
    for(int i = 0 ; i <= n-1 ; i++)
        printf("%d\t" , arr[i]) ;
   
    return 0 ;
}