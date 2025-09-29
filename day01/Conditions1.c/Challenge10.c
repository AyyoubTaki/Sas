#include <stdio.h>

int main(){
    char months[][20] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int j, m, a;

    printf("Entrez un le jour, puis le mois et puis l'anne: ");
    scanf("%d %d %d", &j, &m, &a);

    printf("%d-%s-%d", j, months[m], a);
}