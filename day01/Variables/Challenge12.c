#include<stdio.h>

int main()
{
    int a;
    int b;
    printf(" enter your numbers:");
    scanf("%d",&a);
for(int i = 4 ; i > 0 ; i--)
{
    b = a % 10 ;
    a  = a / 10;

    printf("%d",b);
}


}