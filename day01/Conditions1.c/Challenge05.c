#include <stdio.h>

int main(){

    float annee;
    printf("Entrez une annee : ");
    scanf("%f", &annee);

    int choix;
    printf("1. Mois\n 2. Jours\n 3.Heures\n 4.Minutes\n 5. Secondes\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);

    switch(choix) {
        case 1:
            printf("%f annee(s) = %f mois\n", annee, annee *12);
            break;
        case 2:
            printf("%f annee(s) = %f jours\n", annee, annee * 365);
            break;
        case 3:
            printf("%f annee(s) = %f heures\n", annee, annee * 365 * 24);
            break;
        case 4:
            printf("%f annee(s) = %f minutes\n", annee, annee* 365* 24 * 60);
            break;
        case 5:
            printf("%f annee(s) = %f secondes\n", annee, annee * 365 * 24 * 60* 60);
            break;
        default:
            printf("Choix invalide.\n");
    }
}