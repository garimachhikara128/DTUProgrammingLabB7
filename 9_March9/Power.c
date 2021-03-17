#include<stdio.h>

int power(int , int) ;

int main()
{

    printf("%d", power(5,3)) ;

    return 0 ;
}

// BP : b ^ e
int power(int b , int e)
{
    if(e == 0)
        return 1 ;

    // SP : b ^ e-1
    int sp = power(b, e-1) ;

    // Work
    int bp = sp * b ;

    return bp ;
}