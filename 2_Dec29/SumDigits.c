#include<stdio.h>

int main()
{
    int n ;
    int sum = 0 ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    int temp = n ;

    while(n != 0)
    {
        int rem = n % 10 ;
        sum = sum + rem ;
        n = n / 10 ;
    }

    printf("Sum of Digits of %d is %d", temp , sum) ;

    return 0 ;
}