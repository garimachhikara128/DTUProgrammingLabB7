#include<stdio.h>

int main()
{
    int n , rot ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    printf("Enter rotations ?") ;
    scanf("%d", &rot) ;

    // number n no. of digits calculate ?
    int temp = n ;
    int nod = 0 ;
    while(temp != 0)
    {
        nod = nod + 1 ;
        temp = temp/10 ;
    }

    // 10 ^ nod-1
    int mult = 1 ;
    int count = 1 ;
    while(count <= nod-1)
    {
        mult = mult * 10 ;
        count = count + 1 ;
    }

    // rotate
    rot = rot % nod ;
    int r = 1 ;
    while(r <= rot)
    {
        int ld = n % 10 ; // 6 5 4
        int rest = n / 10 ; // 12345 61234  56123

        int ans = ld * mult + rest ; // 612345 561234 456123

        // printf("%d. %d\n", r, ans) ;

        n = ans ; // 612345 561234 456123
        r = r + 1 ;
    }

    printf("%d", n) ;
    
    return 0 ; 
}