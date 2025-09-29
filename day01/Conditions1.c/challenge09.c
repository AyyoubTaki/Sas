#include <stdio.h>

int main() {
    char ch;
    printf("Entrez un caractere : ");
    scanf("%c", &ch);
    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("une lettre de l'alphabet\n");
        if (ch >= 'a' && ch <= 'z') {
            printf(" minuscule\n");
        } else {
            printf("majuscule\n");
        }
    } else {
        printf("pas une lettre de l alphabet\n");
    }

    return 0;
}
