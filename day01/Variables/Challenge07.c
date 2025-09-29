#include <stdio.h>

int main(){

    float a, b, c;
    printf("Entrez le premier nombre: ");
    scanf("%f", &a);
    printf("Entrez le deuxieme nombre: ");
    scanf("%f", &b);    
    printf("Entrez le troisieme nombre: ");
    scanf("%f", &c);    

    printf("La moyenne ponderee est : %.2f", (a*2 + b*3 + c*5)/10);
    return 0;
}