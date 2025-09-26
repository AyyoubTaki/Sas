#include<stdio.h>
#include<string.h>

int main()
{

    int res;
    char str1[100];
    char str2[100];

printf("entree une chaine de caraters 1: ");
fgets(str1,sizeof(str1),stdin);
printf("entree une chaine de caraters 2: ");
fgets(str2,sizeof(str2),stdin);

res = strcmp(str1,str2);
    if(res = 0)
        printf("caraters 1 = caraters 2");
    else if (res < 0)
        printf("caraters 1 > caraters 2");
    else
     printf("caraters 1 < caraters 2");


}