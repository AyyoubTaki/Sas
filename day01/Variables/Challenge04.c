#include <stdio.h>

int main(){

    float vit;
    printf("Entrer une vitesse en km/h: ");
    scanf("%f", &vit);

    vit *= 0.27778;

    printf("la temperature en Kelvin est : %f", vit);

    return 0;
}