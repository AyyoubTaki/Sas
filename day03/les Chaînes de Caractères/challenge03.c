#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[100];

printf("entree une chaine de caraters 1: ");
fgets(str1,sizeof(str1),stdin);
printf("entree une chaine de caraters 2: ");
fgets(str2,sizeof(str2),stdin);

strcat(str1,str2);
printf("%s",str1);


}