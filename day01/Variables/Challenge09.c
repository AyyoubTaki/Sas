#include <stdio.h>
#include <math.h>

int main(){

    float x1, y1, z1, x2, y2, z2;
    printf("Entrez le cordonnees du premier point: ");
    scanf("%f %f %f", &x1, &y1, &z1);
    printf("Entrez le cordonnees du deuxieme point: ");
    scanf("%f %f %f", &x2, &y2, &z2);       

    double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    printf("La moyenne ponderee est : %.2f", dist);
    return 0;
}