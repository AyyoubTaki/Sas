#include<stdio.h>

struct pc
{
    int a;
    int b;
};
int sum(int x , int y)
{
    return(x + y);
}
int main()
{
    struct pc dell = { 3,10};
    printf("%d",sum(dell.a,dell.b));
    
}
