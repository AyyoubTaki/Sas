#include<stdio.h>

int main()
{
    int a;
    printf("enter the number of elements : ");
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i < a ; i++)
    {
        scanf("%d", &arr[i]);
    }
    int hold = arr[0];

    for (int x = 1 ; x < a ; x++)
    {
        if (hold > arr[x]) 
        hold = arr[x];
    }
    printf("Min = %d\n", hold);
}