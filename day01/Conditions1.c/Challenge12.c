#include <stdio.h>

int main() {
    int h1, m1, s1, h2, m2, s2;

    printf("Entrez la premiere instant");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Entrez la deuxieme instant: ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    int conv1 = h1*3600 + m1*60 + s1;
    int conv2 = h2*3600 + m2*60 + s2;

    if (conv1 > conv2){
        printf("Le premier instant vient avant le deuxième ;");
    } else if (conv1 < conv2){
        printf("Le deuxième instant vient avant le premier.");
    } else {
        printf("Il s'agit du même instant.");
    }

    return 0;
}