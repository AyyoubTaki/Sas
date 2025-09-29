#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;

    printf("Entrez trois entiers : ");
    scanf("%d %d %d", &a, &b, &c);

    int delta = b*b - 4*a*c;
    
    if (delta > 0) {
        int x1 = (-b + sqrt(delta)) / (2*a);
        int x2 = (-b - sqrt(delta)) / (2*a);
        printf("x1 = %d\n", x1);
        printf("x2 = %d\n", x2);    
    } else if (delta == 0) {
        int x = (-b) / (2*a);
        printf("x = %d\n", x);
    } else {
        printf("No solution");
    }
    return 0;
}