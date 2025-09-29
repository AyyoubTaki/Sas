#include<stdio.h>
int main()
{
    int a[] = {0,1,3,4,5,6};
    int to_find ;
    int found = 0;
    printf("enter your number : ");
    scanf("%d",&to_find);
    for (int i = 0; i < 6; i++)
    {
        if (a[i] == to_find)
        {
            printf("found ! ");
            found  = 1 ;
        }
    }
    if(!found)
    {
        printf("not found");
    }
    
}