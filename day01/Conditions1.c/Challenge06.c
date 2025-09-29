#include <stdio.h>

int main(){

    int a;      
    printf("Entrez un entier : ");
    scanf("%d", &a);
    if (a > 0) {
        printf("Le nombre est positif\n");
    } else {
        printf("Le nombre est negatif\n");
    }
    else {
        printf("Le nombre est nul\n");
    }
    return 0;
}