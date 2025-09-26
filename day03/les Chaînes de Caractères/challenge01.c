#include<stdio.h>

int main()
{

char str[100];

printf("entree une chaine de caraters : ");
fgets(str,sizeof(str),stdin);

printf("\nvotre chaine de caraters et : %s",str);
return 0;

}