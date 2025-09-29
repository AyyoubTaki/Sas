#include <stdio.h>

int main(){

    int a, b, sum;
    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);

    if (a == b) {
        sum = 3 * (a + b);
        printf("Le resultat est : %d\n", sum);
        return 0;
    } else {
        sum = a + b;
        printf("Le resultat est : %d\n", sum);
        return 0;
    }

}