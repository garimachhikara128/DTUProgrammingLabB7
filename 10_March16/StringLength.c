#include<stdio.h>

int main()
{
    char str[20] ;

    printf("Enter the string ?") ;
    scanf("%s", str) ;

    // length logic ...
    int i = 0 ;
    while(str[i] != '\0')
        i++ ;

    printf("Length of %s is %d", str, i) ;

    return 0 ;
}