#include<stdio.h>

int main()
{
char str[100];
printf("enter you string:");
scanf("%s",&str);
    int i = 0 ;
	
	while (str[i])
		i++;
    while(i)
    {
    printf("%c",str[i]);
        i--;
    }

}