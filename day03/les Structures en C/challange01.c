#include<stdio.h>
#include<string.h>

struct person
{
    char num[30];
    char prenom[30];
    int age;
    
};
int main()
{
    struct person person1 = {"taki","ayyoub",21};
    printf(" %s   %s  %d",person1.num,person1.prenom,person1.age);
}