#include<stdio.h>

int main()
{
    int binary ;

    printf("Enter the no ?") ;
    scanf("%d", &binary) ;

    int ans = 0 ;
    int mult = 1 ; // 2 ^ 0

    while(binary != 0)
    {
        int rem = binary % 10 ;

        ans = ans + rem * mult ;

        binary = binary / 10 ;
        mult = mult * 2 ;
    }

    printf("Decimal representation is %d" , ans) ;

    return 0 ; 
}