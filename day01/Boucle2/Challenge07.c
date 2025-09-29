#include<stdio.h>
#include<math.h>

int main()
{
    int a = 12345;
    int b;
    int rev = 0;
    for (int i = 5 ; i > 0 ; i--)
    {
        b = a % 10;
        a = a / 10 ;
        rev += b * pow(10,i - 1);
    } 
    printf("%d",rev);

}