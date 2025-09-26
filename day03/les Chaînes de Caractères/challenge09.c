#include<stdio.h>

int main()
{
    char str[100];
    print("enter your string :");
    fgets(str,sizof(str),stdin);

    int i = 0;
    while (str[i])
    {
        if(str[i] == ' ')
        {
            i++;
        }
    }
    printf("==>%s",str);

}