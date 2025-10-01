#include<stdio.h>
#include <string.h>

    int numof = 20;
    int choix;
    int head = 1;

struct zoo
{
    int id;
    char name[20];
    char type[20];
    int age;
    char habitat[20];
    float weight;

};
 struct zoo animaux[200] = {
    {1, "Simba", "Lion", 5, "Savane", 190.5},
    {2, "Nala", "Lion", 4, "Savane", 175.0},
    {3, "ShereKhan", "Tigre", 8, "Jungle", 220.3},
    {4, "Baloo", "Ours", 12, "Forêt", 310.0},
    {5, "Raja", "Éléphant", 15, "Savane", 540.7},
    {6, "Marty", "Zèbre", 6, "Savane", 300.2},
    {7, "Gloria", "Hippopotame", 10, "Rivière", 450.0},
    {8, "Alex", "Lion", 7, "Savane", 200.0},
    {9, "Julien", "Lémurien", 3, "Jungle", 12.5},
    {10, "Melman", "Girafe", 9, "Savane", 390.8},
    {11, "Timon", "Suricate", 2, "Désert", 1.2},
    {12, "Pumbaa", "Phacochère", 5, "Savane", 120.0},
    {13, "Scar", "Lion", 11, "Savane", 210.4},
    {14, "Kaa", "Serpent", 6, "Jungle", 45.0},
    {15, "Iko", "Perroquet", 4, "Jungle", 2.1},
    {16, "Dumbo", "Éléphant", 3, "Savane", 320.0},
    {17, "Kiki", "Chien sauvage", 7, "Savane", 25.0},
    {18, "Donatello", "Tortue", 40, "Rivière", 90.5},
    {19, "Polly", "Oiseau", 5, "Jungle", 1.5},
    {20, "Kong", "Gorille", 13, "Jungle", 180.0}
};
void add()
{
                
                animaux[numof].id = numof + 1;
                printf("Entrer le nom de l'animal: ");
                fgets(animaux[numof].name,20,stdin);
                animaux[numof].name[strlen(animaux[numof].name) - 1] = '\0';
                printf("Entrer le type de l'animal: ");
                fgets(animaux[numof].type,20,stdin);
                animaux[numof].type[strlen(animaux[numof].type) - 1] = '\0';
                printf("Entrer l'age de l'animal: ");
                scanf("%d",&animaux[numof].age);
                getchar();
                printf("Entrer l'habitat de l'animal: ");
                fgets(animaux[numof].habitat,20,stdin);
                animaux[numof].habitat[strlen(animaux[numof].habitat) - 1] = '\0';
                printf("Entrer le poids de l'animal: ");
                scanf("%f",&animaux[numof].weight);
                printf("success\n");
                printf("**********************************\n");
                numof++;
}
void afficher(int i)
{
    
                    printf("**********************************\n");
                    printf("ID ============> %d\n", animaux[i].id);
                    printf("Nom ============> %s\n", animaux[i].name);
                    printf("Type ============> %s\n", animaux[i].type);
                    printf("Age ============> %d\n", animaux[i].age);
                    printf("Habitat ============> %s\n", animaux[i].habitat);
                    printf("Poids ============> %.2f kg\n", animaux[i].weight);
                    printf("***********************************\n");
        
}
int main()
{
   
  
    while(head)
    {  
        printf("|***********************|MENU|**************************|\n");
        printf("|1.Ajouter une nouvelle animal.                         |\n");
        printf("|2.Afficher la liste des animaux.                       |\n");
        printf("|3.Modifier les animaux.                                |\n");
        printf("|4.Supprimer une tâche par identifiant.                 |\n");
        printf("|5.Rechercher un animal                                 |\n");
        printf("|6.Statistiques                                         |\n");
        printf("|7.deconnecter                                          |\n");
        printf("|*******************************************************|\n");
        printf("votre choix :");
        scanf("%d", &choix);
        printf("**********************************\n");
        getchar();
        switch (choix)
        {
            case 1:
            {
                printf("1. ajouter pluesieur animaux\n");
                printf("2. ajouter un seul animal\n");
                int choix2;
                scanf("%d", &choix2);
                getchar();
                if (choix2 == 1)
                {
                    int n;
                    printf("Combien d'animaux voulez-vous ajouter? ");
                    scanf("%d", &n);
                    getchar();
                    for (int i = 0; i < n; i++) 
                    {
                        add();
                        getchar();
                    }
                }
                else
               add();
                break;
            }
            case 2:
            {
            printf("1.liste des animaux par ordre alphabetique:\n");
            printf("2.liste des animaux par ID:\n");
            printf("3.afficher par age :\n");
            printf("4.afficher par habitat :\n");
            printf("votre choix :");
            int choix3;
            scanf("%d", &choix3);
            struct zoo temp;
            if (choix3 == 2)
            {
                for (int i = 1; i < numof; i++)
                {
                    for(int j = 0 ; j < numof ;j++)
                    {
                        if(animaux[i].id<animaux[j].id)
                        {
                            temp=animaux[j];
                            animaux[j]=animaux[i];
                            animaux[i]=temp;
                        }
                    }
                } 
                for (int i = 0; i < numof; i++) 
                afficher(i);
            }
        
            else if (choix3 == 1)
            {
                
                for (int i = 1; i < numof -1 ; i++)
                {
                    for(int j = 0 ; j < numof ;j++)
                    {
                        if(strcmp(animaux[j].name,animaux[j].name) < 0)
                        {
                            temp=animaux[i];
                            animaux[j]=animaux[i];
                            animaux[i]=temp;
                        }
                    }
                }
                for (int i = 0; i < numof; i++) 
                afficher(i);
            }
            else if (choix3 == 3)
            {
                
                for (int i = 1; i < numof ; i++)
                {
                    for(int j = 0 ; j < numof ;j++)
                    {
                        if(animaux[i].age<animaux[j].age)
                        {
                            temp=animaux[i];
                            animaux[i]=animaux[j];
                            animaux[j]=temp;
                        }
                    }
                }
                for (int i = 0; i < numof; i++) 
                afficher(i);
            }
            else if (choix3 == 4)
            {
                
                for (int i = 1; i < numof ; i++)
                {
                    for(int j = 0 ; j < numof ;j++)
                    {
                        if(strcmp(animaux[i].habitat,animaux[j].habitat) < 0)
                        {
                            temp=animaux[i];
                            animaux[i]=animaux[j];
                            animaux[j]=temp;
                        }
                    }
                }
                for (int i = 0; i < numof; i++) 
                afficher(i);
            }
            else
            {
                printf("choix invalide\n");
            }
            break;
            }
            case 3:
            {
                int mod;
                printf("Entrer l'ID de l'animal à modifier: ");
                scanf("%d", &mod);
                getchar(); 
                int found = 0; 
                for (int i = 0; i < numof; i++) 
                {
                    if (animaux[i].id == mod) 
                    {
                        int choix4;
                        printf("1. Modifier la age\n");
                        printf("2. Modifier l'habitat\n");
                        printf("votre choix :");
                        scanf("%d", &choix4);
                        getchar();
                        if (choix4 != 1 && choix4 != 2) 
                        {
                            printf("Choix invalide.\n");
                            break; 
                        }
                        if (choix4 == 1)
                        {
                            printf("Entrer le nouvel âge de l'animal: ");
                            scanf("%d", &animaux[i].age);                   
                        }
                        else if (choix4 == 2)
                        { 
                            printf("Entrer le nouvel habitat de l'animal: ");
                            fgets(animaux[i].habitat, 20, stdin);
                            animaux[i].habitat[strlen(animaux[i].habitat) - 1] = '\0';
                        }
                        printf("modifié avec succès.\n");
                        found = 1; 
                        break; 
                    }
                }
                if (!found) 
                {
                    printf("Animal avec ID %d non trouvé.\n", mod);
                }
                break;
            }
            case 4:
            {
                int IDdel;
                int conf;
                printf("Entrer l'ID de l'animal à supprimer: ");
                scanf("%d", &IDdel);
                int found = 0; 
                for (int i = 0; i < numof; i++) 
                {
                    if (animaux[i].id == IDdel) 
                    {
                        printf("are you sure to delete this animal ?(yes 1|no 0)");
                        
                        scanf("%d",&conf);
                        if(conf == 1)
                        {

                        strcpy (animaux[i].name , animaux[numof - 1].name);
                        strcpy (animaux[i].habitat , animaux[numof - 1].habitat);
                        strcpy (animaux[i].type , animaux[numof - 1].type);
                        animaux[i].id = animaux[numof - 1].id;
                        animaux[i].age = animaux[numof - 1].age;
                        animaux[i].weight = animaux[numof - 1].weight;
                        }
                        numof--;
                        printf("supprimé avec succès.\n");
                        found = 1; 
                        
                     }
                     else if (conf==0)
                     {  printf("operation annulée\n");
                        break;  
                     }
                       break; 
                    
                    
                }
                if (!found) 
                {
                    printf("Animal avec ID %d non trouvé.\n", IDdel);
                }
                break;
            }
            
           
            case 5:
            {
                int choix5;
                printf("1.Rechercher par ID\n");
                printf("2.Rechercher par nom\n");
                printf("3.recherche par type \n");
                printf("votre choix :");
                scanf("%d", &choix5);
                if (choix5 != 1 && choix5 != 2 && choix5 != 3) 
                {
                    printf("Choix invalide.\n");
                    break; 
                }
                getchar();
                if (choix5 == 1)
                {
                    int searchID;
                    printf("Entrer l'ID de l'animal à rechercher: ");
                    scanf("%d", &searchID);
                    int found = 0; 
                    for (int i = 0; i < numof; i++) 
                    {
                        if (animaux[i].id == searchID) 
                        {
                            afficher(i);
                            found = 1; 
                            break; 
                        }
                    }
                    if (!found) 
                    {
                        printf("Animal non trouvé.\n");
                    }
                    break;
                }
                else if (choix5 == 2 )
                {
                   char searchName[20];
                printf("Entrer le nom de l'animal à rechercher: ");
                fgets(searchName, 20, stdin);
                searchName[strlen(searchName) - 1] = '\0'; 
                int found = 0; 
                for (int i = 0; i < numof; i++) 
                {
                    if (strcmp(animaux[i].name, searchName) == 0) 
                    {
                        afficher(i);
                        found = 1; 
                        break; 
                    }
                }
                 if (!found) 
                    {
                        printf("Animal non trouvé.\n");
                    }
                    break;
                }
            else if (choix5 == 3 )
                {
                   char searchType[20];
                printf("Entrer le type de l'animal à rechercher: ");
                fgets(searchType, 20, stdin);
                searchType[strlen(searchType) - 1] = '\0'; 
                int found = 0;
                for(int i = 0; i < numof; i++) 
                {
                    if (strcmp(animaux[i].type, searchType) == 0) 
                    {
                        afficher(i);
                        found = 1;
                    }
                } 
                 if (!found) 
                    {
                        printf("Animal non trouvé.\n");
                    }
                    break;
            }
                break;
            }
            case 6:
            {
                int minage=animaux[0].age;
                int maxage=animaux[0].age;
                printf("------Statistiques des animaux dans le zoo------\n");
                printf("Nombre total d'animaux: %d\n", numof);
                for (int i = 0 ; i <numof ; i++)
                {
                    if (animaux[i].age>minage)
                    {
                        minage=animaux[i].age;
                    }else if (animaux[i].age<maxage)
                    {
                        maxage=animaux[i].age;
                    }
                        
                }
                printf("L'animal le plus âgé a %d ans.\n", minage);
                printf("L'animal le plus jeune a %d ans.\n", maxage);
                printf("age moyen des animaux: %d ans.\n",(minage+maxage)/2);
              
                break;
            }
             case 7:
            {
                head = 0;
                printf("deconnected");
                break;
            }
    
}
}
}