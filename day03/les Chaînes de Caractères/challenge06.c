#include<stdio.h>

int main()
{
    int i = 0;
    char charr;
    char str[100];
    int c;
    int count = 0;
    printf("enter your string : ");
    scanf("%s",&str);
    printf("enter your char : ");
    scanf(" %c",&charr);

    while(str[i] != '\0')
    {
        c = str[i] - charr;
        if(c == 0)
        {
            count++;
        }
        i++;
    }
    printf("you have %d of %c",count,charr);

}