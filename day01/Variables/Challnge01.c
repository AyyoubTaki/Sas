#include <stdio.h>

int main (){

    int age= 0;
    char nom[50], prénom[50], sexe[10], adresse_email[50];
    
    printf("Entrer votre nom: ");
    fgets(nom, sizeof(nom), stdin);
    printf("Entrer votre prenom: ");
    fgets(prénom, sizeof(prénom), stdin);
    printf("Entrer votre addresse: ");
    fgets(adresse_email, sizeof(adresse_email), stdin);
    printf("Entrer votre sexe: ");
    fgets(sexe, sizeof(sexe), stdin);
    printf("Entrer votre age: ");
    scanf("%d", &age);

    printf("\nNom: %sPrenom: %sAddresse Email: %sAge: %d\nSexe: %s\n", 
                                          nom, prénom, adresse_email, age, sexe);
    return 0;
}