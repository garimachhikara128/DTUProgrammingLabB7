#include<stdio.h>

int main()
{   
    int n ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    int a = 0 ; // 0th fibonacci no
    int b = 1 ; // 1st fibonacci no

    int count = 0 ;
    while(count <= n)
    {
        printf("%d\t", a) ;

        int sum = a + b ;

        // update
        a = b ;
        b = sum ;

        count = count + 1 ;
    }

    return 0 ;
}