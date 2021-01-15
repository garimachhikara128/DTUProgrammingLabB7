#include<stdio.h>

int main()
{
    int n1 , n2 ;

    printf("Enter two nos ?") ;
    scanf("%d%d", &n1, &n2) ;

    int max = n1 > n2 ? n1 : n2 ;

    int count = max ;

    while(count <= n1*n2)
    {
        if(count % n1 == 0 && count % n2 == 0)
            break ;

        count = count + max ;
    }

    printf("LCM of %d and %d is %d", n1, n2, count) ;

    return 0 ;
}