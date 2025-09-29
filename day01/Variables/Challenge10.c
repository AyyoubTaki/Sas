#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(){

    float r;
    printf("Entrez le rayon du sphere: ");
    scanf("%f", &r);     

    double vol = (4.0/3.0)*PI*pow(r, 3);
    printf("Le volume de la sphere est : %.2f\n", vol);
    return 0;
}