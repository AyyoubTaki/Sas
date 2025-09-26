#include<stdio.h>

int main()
{
    int a;
    printf("enter the number of elm : ");
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i < a ; i++)
    {
        scanf("%d", &arr[i]);
    }
    int tmp = 0;

    for (int x = 1 ; x < a ; x++)
    { 
        for (int z = 0 ; z < a ; z++)
        {
            if (arr[x] > arr[z])
            {
                tmp = arr[x];
                arr[x] = arr[z];
                arr[z] = tmp;
            }
        }

    }
    for (int x = 0 ; x < a ; x++)
    {
        printf("%d ",arr[x]);
    }
}
