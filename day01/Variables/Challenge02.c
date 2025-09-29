#include <stdio.h>

int main(){

    float temp;
    printf("Entrer la degre de temperature en Celsius: ");
    scanf("%f", &temp);

    temp += 273.15;

    printf("la temperature en Kelvin est : %f", temp);

    return 0;
}