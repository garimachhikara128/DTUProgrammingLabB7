#include<stdio.h>

void fun() ;

int main()
{

    fun() ;
    return  0;

}

void fun()
{
    for(int i = 1 ; i <= 5 ; i++)
    {
        printf("%d\n", i) ;

        if(i == 3)
            return  ;
    }

}