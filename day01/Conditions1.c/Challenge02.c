#include <stdio.h>

int main(){

    char l;
    printf("Enter a letter: ");
    scanf("%c", &l);
    if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' || l == 'y') {
        printf("%c is a vowel.\n", l);
    } else {
        printf("%c is a consonant.\n", l);
    }
    return 0;
}