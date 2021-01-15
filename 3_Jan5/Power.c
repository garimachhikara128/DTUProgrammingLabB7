#include<stdio.h>

int main()
{
    int base , exponent ;

    printf("Enter Base ?") ;
    scanf("%d", &base) ;

    printf("Enter Exponent ?") ;
    scanf("%d", &exponent) ;

    int ans = 1 ;

    int count = 1 ;
    while(count <= exponent)
    {
        ans = ans * base ;
        count = count + 1 ; 
    }

    printf("%d ^ %d = %d" , base, exponent, ans) ;

    return 0 ; 
}