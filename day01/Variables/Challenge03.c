#include <stdio.h>

int main(){

    float dist;
    printf("Entrer une distance en  Kilometre: ");
    scanf("%f", &dist);

    dist *= 1093.61;

    printf("la temperature en Kelvin est : %f", dist);

    return 0;
}