#include<stdio.h>
#include<string.h>

int main()
{
      int sum = 0;

    int a;
    int quantity[100];
    int numof = 0;
    char book[100][100];
    char bookA[100][100];
    float bookprix[100];
    int head = 1;
    while (head)
{

    printf("\n1. Ajouter un Livre au Stock'\n");
    printf("2. Afficher Tous les Livres\n");
    printf("3. Rechercher un livre par son titre.\n");
    printf("4. Mettre à Jour la Quantité d'un Livre\n");
    printf("5. Supprimer un Livre du Stock\n");
    printf("6. Afficher le Nombre Total de Livres en Stock\n");
    printf("7. déconnexion\n");
    printf("choisir un numéro : ");
    scanf("%d",&a);


    switch (a)
    {
      
        case 1:
 
        printf("Titre du livre : ");
            scanf("%s",&book[numof]);
        printf("Auteur du livre : ");
            scanf("%s",&bookA[numof]);
        printf("Prix du livre : ");
            scanf("%f",&bookprix[numof]);  
        printf("Quantité en stock : ");
          scanf("%d",&quantity[numof]);

             numof++;
             break;
       
        case 2:
         for (int i = 0 ; i < numof ; i++)
         {
             printf("stock  %d\n", i + 1); 
             printf("Titre du livre ==> %s\n" ,book[i]);
             printf("Auteur du livre ==> %s\n",bookA[i]);
             printf("Prix du livre ==> %.2f Dh\n",bookprix[i]);
             printf("Quantité en stock ==> %d\n",quantity[i]);
             
         }
            break;
            char to_chack[100];
        case 3:
        printf("enter your book to find : ");
        scanf("%s",to_chack);
        int found = 0;
                for (int i = 0 ; i < numof ; i++ )
                {
                   if (strcmp(to_chack,book[i]) == 0)
                        printf("Book found : \n%s",book[i]);
                        found = 1;
                }
                if (!found)
                printf("not found !");
            break;
        case 4:
        char to_k[100];
    
        int found1 = 0;
        printf("enter your book :");
        scanf("%s",&to_k);
        for (int i = 0 ; i < numof ; i++ )
                {
                   if (strcmp(to_k , book[i]) == 0)
                        printf("enter new quantity :");
                        
                        scanf("%d",&quantity[i]);
                        printf("quantity updated ");
                        found1 = 1 ;
                }
                if (!found1)
                printf("not found !");
                 break;
        case 5:
         //Supprimer un livre du stock.
            char to_delete[100];
            int found2 = 0 ;
                printf("enter the book you want delete :");
                scanf("%s",&to_delete);
            for (int i = 0 ; i < numof ; i++ )
                {
                   if (strcmp(to_delete , book[i]) == 0)
                   {
                   
                        strcpy (book[i] , book[numof - 1]);
                        strcpy(bookA[i] , bookA[numof - 1]);
                        bookprix[i] = bookprix[numof - 1];
                        quantity[i] = quantity[numof -1];
                        numof--;
                        printf(" book deleted  ;");
                        found2 = 1 ;
                   }
                }
                if (!found2)
                printf("not found !");
            break;
        case 6:
             for (int i = 0 ; i < numof ; i++)
             {
                 sum += quantity[i];
             }
             printf(" your quantity === > %d ",sum);
            break;
        case 7:
            head = 0 ;
            printf("deconnected");
            break;
    }

    }
}