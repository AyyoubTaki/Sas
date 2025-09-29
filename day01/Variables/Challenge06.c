#include<stdio.h>
#include<string.h>

int main()
{
    float a, b;
    printf("Entrez le premier nombre: ");
    scanf("%f", &a);
    printf("Entrez le deuxieme nombre: ");
    scanf("%f", &b);
    

    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    printf("%.2f x %.2f = %.2f\n", a, b, a * b);
    printf("%.2f / %.2f = %.2f\n", a, b, a / b);
}