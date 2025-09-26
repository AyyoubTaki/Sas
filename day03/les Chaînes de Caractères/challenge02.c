#include<stdio.h>

int main()
{
   int	i;
   char str[] = "test";

	i = 0;
	while (str[i])
		i++;

printf("\nvotre len et : %d",i);
}