#include <stdio.h>

int main(){

    char a;
    printf("Entrez un caractere : ");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z') {
        printf("une lettre minuscule");
    } else {
        printf("une lettre majuscule");
    }
    return 0;
}