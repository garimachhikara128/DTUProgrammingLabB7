#include<stdio.h>

int addition(int, int) ;

int main()
{
    printf("hello\n") ;

    int ans = addition(10,20) ;
    printf("%d\n", ans) ;

    printf("bye\n") ;
    return 0 ;
}

int addition(int a, int b)
{
    int sum = a + b ;
    return sum ;
}