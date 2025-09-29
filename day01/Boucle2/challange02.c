#include<stdio.h>

int main()
{
    int a ;
    int b = 1;
    printf("enter your number : ");
    scanf("%d",&a);
    while ( a > 0)
    {
        b = b * a;
        a--;
    }
    printf("%d",b);
}