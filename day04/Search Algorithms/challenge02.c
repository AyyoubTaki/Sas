#include<stdio.h>
int main()
{
    int a[] = {1,3,4,5,6,7};
    int to_find ;
    int cu, cu_0=0, cu_x=6;
    int found = 0;
    printf("enter your number : ");
    scanf("%d",&to_find);
    while(1)
    {
        cu = (cu_0+cu_x)/2;
        if (cu == cu_0 || cu == cu_x)
        {
            break;
        }
        
        if (a[cu] == to_find)
        {
            printf("found ! ");
            found  = 1 ;
        }
        else if (a[cu] < to_find)
        {
            cu_0 = cu;
            continue;
        }
        else if(a[cu] < to_find)
        {
            cu_x = cu;
            continue;
        }
        
    }
    if(!found)
    {
        printf("not found");
    }
    
}