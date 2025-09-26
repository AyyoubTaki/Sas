#include<stdio.h>
#include<string.h>

struct contact
{
    char nom[50];
    char pnum[50];
    char email[50];
};

int main()
{
    int numof = 0;
    int choix;
    int head = 1;
    struct contact tcontact[100];

    while(head)
    {

        printf("1.Ajouter un contact.\n");
        printf("2.Modifier un Contact.\n");
        printf("3.Supprimer un Contact.\n");
        printf("4.Afficher Tous les Contacts.\n");
        printf("5.Rechercher un Contact.\n");
        printf("6.deconnecter\n");
        printf("votre choix :");
        scanf("%d", &choix);
         printf("**********************************\n");
        getchar();
        switch (choix)
        {
            case 1:
            {
                printf("Entrer le nom: ");
                fgets(tcontact[numof].nom,50,stdin);
                tcontact[numof].nom[strlen(tcontact[numof].nom) - 1] = '\0';
               //scanf("%s", tcontact[numof].nom);
                printf("Entrer le numero de tele: ");
                fgets(tcontact[numof].pnum,50,stdin);
                tcontact[numof].pnum[strlen(tcontact[numof].pnum) - 1] = '\0';
                //scanf("%d", &tcontact[numof].pnum);
                printf("Entrer l'addresse email: ");
                fgets(tcontact[numof].email,50,stdin);
                  tcontact[numof].email[strlen(tcontact[numof].email) - 1] = '\0';
                //scanf("%s", tcontact[numof].email);
                printf("success\n");
                printf("**********************************\n");
                numof++;
                break;
            }
            case 2:
            {
                char to_update[100];
            int found2;
                printf("enter the contact you want to update :");

                //scanf("%s",to_update);
                fgets(to_update,100, stdin);
             to_update[strlen(to_update) - 1 ] = '\0';
                
            for (int i = 0 ; i < numof ; i++ )
                {
                   if(strcmp(tcontact[i].nom,to_update) == 0)
                   {
                    int a;
                    printf("1.le numero de tele\n");
                    printf("2 email\n");
                    printf("what do want to change :");
                    scanf("%d",&a);
                    if (a = 1)
                    {
                        getchar();
                       printf("Entrer le numero de tele: ");
                        fgets(tcontact[i].pnum,50,stdin);
                        tcontact[i].pnum[strlen(tcontact[i].pnum) - 1] = '\0';
                    }
                    else if (a = 2)
                    {
                        getchar();
                       printf("Entrer l'addresse email: ");
                        fgets(tcontact[i].email,50,stdin);
                        tcontact[i].email[strlen(tcontact[i].email) - 1] = '\0';
                    }
                    printf("updated !\n");


                
                        
                        found2 = 1 ;
                   }
                }
                if(!found2)
                    printf("not found :\n");

                break;
            }
            case 3:
            {
                   char to_delete[100];
            int found2 = 0 ;
                printf("enter the contact you want delete :");
                scanf("%s",&to_delete);
            for (int i = 0 ; i < numof ; i++ )
                {
                   if (strcmp(tcontact[i].nom,to_delete) == 0)
                   {
                   
                        strcpy (tcontact[i].nom,tcontact[numof - 1].nom);
                        strcpy (tcontact[i].pnum,tcontact[numof - 1].pnum);
                        strcpy (tcontact[i].email,tcontact[numof - 1].email);
            
                        numof--;
                        printf(" contact deleted\n  ;");
                        found2 = 1 ;
                   }
                break;
            }
        }
            case 4:
            {
                for (int i = 0; i < numof; i++) 
                {
                    printf("**********************************\n");
                    printf("le num ============> %s\n", tcontact[i].nom);
                    printf("le numero de tele ==>%s\n", tcontact[i].pnum);
                    printf("l'addresse email ==> %s\n", tcontact[i].email);
                    printf("***********************************\n");
                }

                break;
            }
            char to_found[100];
            case 5:
            {
                int found = 0; 
               printf("enter your book to find : ");
               scanf("%s",to_found);
                for (int x = 0 ; x < numof ; x++ )
                {
                   if (strcmp(tcontact[x].nom,to_found) == 0)
                   {
                        printf("Book found : \n");
                        printf("**********************************\n");
                        printf("le num ============> %s\n", tcontact[x].nom);
                        printf("le numero de tele ==>%s\n", tcontact[x].pnum);
                        printf("l'addresse email ==> %s\n", tcontact[x].email);
                        printf("***********************************\n");
                        found = 1;
                   }
                }
                          if (!found)
                              printf("not found !");
               
                break;
            }
                
              
             case 6:
            {
                head = 0;
                printf("deconnected");
                break;
            }
            }
    }
                
}