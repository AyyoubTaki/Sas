#include<stdio.h>
int main() {
    int n;
    int a = 0;
    int b =0;
    printf("enter number n : ");
    scanf("%d",&n);

    while (1)
    {
        if (a == n){
            break;
        }else if(b % 2 != 0)
        {
            printf("%d ",b);
            a++;                                                                                                    
        }
        b ++;
    }


    return 0;
}