#include<stdio.h>

void addition(int, int) ;

int main()
{
    printf("hello\n") ;

    addition(10, 20) ;

    int x = 40 ;
    int y = 50 ;
    addition(x, y) ;

    printf("bye\n") ;

    return 0 ;
}

void addition(int a, int b)
{
    int sum = a + b ;
    printf("%d\n", sum) ;

}