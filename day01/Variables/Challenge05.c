#include<stdio.h>

int main()
{
    int temp;
    printf("enter your temp :");
    scanf("%d",&temp);

    if(temp < 0)
    printf("ice");
    else if(temp >= 0 && temp <= 100)
    printf("liquid"); 
   else
      printf("gas");
}