#include<stdio.h>

int main()
{
int a;

printf("enter number of elements : ");
scanf("%d",&a);

int arr[a];
for (int i = 0 ; i < a ; i++)
{
    scanf("%d", arr[i]);
}
for(int x = 0 ; x < a ; x++)
{
    printf("%d",arr[x]);
}
}