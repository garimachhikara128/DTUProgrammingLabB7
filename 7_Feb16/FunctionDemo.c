#include<stdio.h>

void addition() ;
void subtraction() ;

int main()
{
    printf("hello\n") ;
    addition() ;
    subtraction() ;
    printf("bye\n") ;

    return 0 ;
}

void addition()
{
    int a = 10 ;
    int b = 20 ;

    int sum = a + b ;

    subtraction() ;

    printf("%d\n", sum) ;
}

void subtraction()
{
    int a = 100 ;
    int b = 40 ;

    int diff = a - b ;

    printf("%d\n", diff) ;
}