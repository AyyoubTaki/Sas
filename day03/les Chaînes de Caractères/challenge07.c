#include<stdio.h>

int main()
{
int i = 0;
char str[100];
printf("enter your string :");
scanf("%s", str);

while(str[i])
{
    if(str[i] >= 'a'&& str[i] <= 'z')
        str[i] -= 32;
    i++;
}
printf("===> %s",str);
}