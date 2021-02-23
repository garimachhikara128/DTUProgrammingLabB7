#include<stdio.h>

void PD(int) ;

int main()
{

    printf("hii\n") ;
    PD(7) ;
    printf("bye\n") ;

    return 0 ;
}

// BP : n -> 1 counting
void PD(int n)
{
    // Base Case
    if(n == 0)
        return ;

    // Work
    printf("%d\n", n) ;

    // SP : n-1 -> 1 counting
    PD(n-1) ;

}