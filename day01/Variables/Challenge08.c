#include <stdio.h>

int main(){

    float a, b, c;
    printf("Entrez le premier nombre: ");
    scanf("%f", &a);
    printf("Entrez le deuxieme nombre: ");
    scanf("%f", &b);    
    printf("Entrez le troisieme nombre: ");
    scanf("%f", &c);    
    float moyenne_geo = pow(a * b * c, 1.0 / 3.0);
    printf("La moyenne ponderee est : %.2f", moyenne_geo);
    return 0;
}