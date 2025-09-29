#include<stdio.h>
int main()
{
    int a[] = {2,1,3,8,5,9};
    int hold = a[0];

    for (int i = 0; i <= 5; i++)
    {
        if (a[i] > hold)
        {
            hold = a[i];
        }
    }
    
    printf("%d", hold);
    
}