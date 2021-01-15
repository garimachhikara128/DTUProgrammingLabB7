#include<stdio.h>

int main()
{
    int n ;
    int ans = 0 ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    int temp = n ;

    while(n != 0)
    {
        int rem = n % 10 ;
        ans = ans * 10 + rem ;
        n = n / 10 ;
    }

    printf("Reverse of %d is %d" , temp, ans ) ;
    
    return 0 ;
}