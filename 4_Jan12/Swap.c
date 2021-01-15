#include<stdio.h>

int main()
{
    int a = 10 ;
    int b = 25 ;

    printf("a : %d\tb : %d\n", a, b) ;

    // swap using extra variable
    // int temp = a ; // temp = 10
    // a = b ; // a = 25 
    // b = temp ; // b = 10

    // printf("a : %d\tb : %d", a, b) ;

    // swap without an extra variable
    a = a + b ;
    b = a - b ;
    a = a - b ;

    printf("a : %d\tb : %d", a, b) ;

    return 0 ;
}