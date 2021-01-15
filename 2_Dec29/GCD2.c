#include<stdio.h>

int main()
{
    int n1 , n2 ;

    printf("Enter two nos ?") ;
    scanf("%d %d", &n1 , &n2) ;
    
    int min ; 
    if(n1 > n2)
        min = n2 ;
    else
        min = n1 ;

    int count = min ;
    while(count >= 1)
    {
        if(n1 % count == 0 && n2 % count == 0)
            break ;

        count = count - 1 ;
    }

    printf("GCD/HCF of %d and %d is %d", n1 , n2 , count) ;
    
    return 0 ; 
}