#include<stdio.h>

int main()
{
 int a;

printf("enter number of elements : ");
scanf("%d",&a);

int arr[a];
int sum = 0;
for (int i = 0 ; i < a ; i++)
{
    scanf("%d", &arr[i]);
    sum = sum + arr[i];

}
printf("%d",sum);

}