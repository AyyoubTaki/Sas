#include<stdio.h>

int main()
{
    int a ,b;
    scanf("%d",&a);
    int arr[a];
    printf("enter factor : ");
    scanf("%d", &b);
    for (int i = 0; i < a ; i++)
    {
        scanf("%d", &arr[i]);
        arr[i] *= b ;
        printf("%d\n",arr[i] );
    }

}