#include<stdio.h>
int main() {
    int b;
    int a;
    int res = 1;
    printf("entrez la base : ");
    scanf("%d",&b);
    printf("entrez l'exposant: ");
    scanf("%d",&a);
    for(int i = 0 ; i < a ; i++)
       res *= b;
        printf("%d",res);
    return 0;
}