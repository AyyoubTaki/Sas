#include<stdio.h>
#include<string.h>

struct person
{
    char num[30];
    char prenom[30];
    int grade[10];
    
};
int main()
{
    int i = 0 ;
    struct person person1 = {"taki","ayyoub"};
    person1.grade[0] = 54;
    person1.grade[1] =  546;
    
    printf(" %s   %s ",person1.num,person1.prenom);
    while(i < 2)
    {
    printf("%d\n",person1.grade[i]);
    i++;
    }
}