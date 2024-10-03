#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct reservation_type {
    char nom[500];
    char prenom[500];
    char telephone [500];
    char statut[500];
    char date [500];
    int reference;
    int age ;
    int deleted ;
}reservation_type;



reservation_type reservation[500] = {
        {"aziz", "karim", "0123456789", "valide", "2024-10-15", 2, 32, 1},
        {"safaa", "lmjared", "0987654321", "reporte", "2024-10-20",33, 8, 1},
        {"saloua", "el baz", "0112233445", "annule", "2024-10-25", 44, 45, 1},
        {"siham", "torki", "0777888999", "valide", "2024-10-30", 55, 22, 1},
        {"Ayman", "slawi", "0666777888", "traite", "2024-11-05", 40, 16, 1}
    };

nombre_de_reservation = 5;

void ajouter_un_reservation(){

    printf(" veuillez entre le nom :");
    scanf("%s",reservation[nombre_de_reservation].nom);
    printf(" veuillez entre le prenom : ");
    scanf("%s",reservation[nombre_de_reservation].prenom);
    printf(" veuillez entre le numero de telephone : ");
    scanf("%s",reservation[nombre_de_reservation].telephone);
    printf("veuillez entre L age: ");
    scanf("%d",&reservation[nombre_de_reservation].age);
    printf("veuillez entre le statut :");
    scanf("%s",reservation[nombre_de_reservation].statut);
    printf("veuillez entre la date de reservation");
    scanf("%s",reservation[nombre_de_reservation].date);
    reservation[nombre_de_reservation].reference = rand();
    reservation[nombre_de_reservation].deleted=1;
    nombre_de_reservation++;

}
void afficher_reservation(){
     printf("------------------------------------------\n");
    for(int i=0 ; i<nombre_de_reservation ; i++){
            if(reservation[i].deleted ==1){
            printf("  Nom: %s\n", reservation[i].nom);
            printf("  Prénom: %s\n", reservation[i].prenom);
            printf("  Numéro de téléphone: %s\n", reservation[i].telephone);
            printf("  Âge: %d\n", reservation[i].age);
            printf("  Statut: %s\n", reservation[i].statut);
            printf("  Date de réservation: %s\n", reservation[i].date);
            printf("  Référence: %d\n", reservation[i].reference);
            printf("------------------------------------------\n");
            }
    }
}

void tri_des_reservations(){
    int choix;
    puts("entre le tri prefier :");
    puts("1.Tri des reservations par Nom:");
    puts("2.Tri des reservations par date :");
    puts("3.Tri des reservations par statut :");
    scanf("%d",&choix);
    if(choix ==1){
            for(int i=0 ; i<nombre_de_reservation ; i++){


                    for(int j=0 ; j<nombre_de_reservation ; j++){
                        if(strcmp(reservation[j].nom,reservation[i].nom)>0 && reservation[i].deleted == 1){
                            reservation_type tmp;
                            tmp = reservation[i];
                            reservation[i] = reservation[j];
                            reservation[j] = tmp;
                        }
                    }

                }
                afficher_reservation();
            }


    else if(choix==2){
            for(int i=0 ; i<nombre_de_reservation ; i++){
                for(int j=0 ; j<nombre_de_reservation ; j++){
                        if(strcmp(reservation[j].date,reservation[i].date)>0 && reservation[i].deleted == 1){
                            reservation_type tmpp;
                            tmpp = reservation[i];
                            reservation[i] = reservation[j];
                            reservation[j] = tmpp;
                        }

                }

            }
            afficher_reservation();
    }
    else if(choix==3){
            for(int i=0 ; i<nombre_de_reservation ; i++){
                for(int j=0 ; j<nombre_de_reservation ; j++){
                    if(strcmp(reservation[j].statut,reservation[i].statut)>0 && reservation[i].deleted == 1){
                            reservation_type tmp1;
                            tmp1 = reservation[i];
                            reservation[i] = reservation[j];
                            reservation[j] = tmp1;
                }
            }
          }
          afficher_reservation();
    }


}
void suprimer_un_reservation(){
    int ref ;
    printf("\nentre le reference de reservation");
    scanf("%d",&ref);

    for(int i ; i< nombre_de_reservation;i++){
        if(ref==reservation[i].reference){
           reservation[i].deleted = 0;
        }
    }

}
void modifier_un_reservation(){
   int choix;
   puts("entre le choix prefier");
   puts("1.modifier statut ");
   puts("2.modifier le nom");
   puts("3.modifier le prenom");
   puts("4.modifier L age");
   puts("5.modifier le telephone");
   puts("6.modifier la date");
   scanf("%d",&choix);

    if(choix==1){
            int indice;
            printf("entre indice tu veux modifier");
            scanf("%d",indice);
            printf("entre le statut de reservation :");
            scanf("%s",reservation[indice].statut);

    }
    else if (choix==2){
        int indicee;
        printf("entre indice tu veux modifier");
        scanf("%d",indicee);
        printf("entre le nom de reservation :");
        scanf("%s",reservation[indicee].nom);



    }
    else if(choix==3){
        int indice1;
        printf("entre indice tu veux modifier");
        scanf("%d",indice1);
        printf("entre le prenom de reservation :");
        scanf("%s",reservation[indice1].nom);


    }
    else if(choix==4){
        int indic;
        printf("entre indice tu veux modifier");
        scanf("%d",indic);
        printf("entre la age de reservation :");
        scanf("%s",reservation[indic].nom);


    }
    else if(choix==5){
        int indic1;
        printf("entre indice tu veux modifier");
        scanf("%d",indic1);
        printf("entre le telephone de reservation :");
        scanf("%s",reservation[indic1].telephone);


    }
    else if(choix==6){
        int indic2;
        printf("entre indice tu veux modifier");
        scanf("%d",indic2);
        printf("entre la date de reservation :");
        scanf("%s",reservation[indic2].date);


    }


}
void Recherche_des_reservations(){
    int choisir;
    printf("=== Menu de Recherche ===\n");
    printf("1. Recherche d'une réservation par nom\n");
    printf("2. Recherche d'une réservation par date\n");
    printf("3. Recherche d'une réservation par référence unique\n");
    printf("=========================\n");
    printf("Entrez votre choix: ");
    scanf("%d",&choisir);

            if(choisir == 1){

                char recherche[50];
                printf("entre le nom de client tu veux recherche :");
                scanf("%s",recherche);
                for(int i=0 ; i<nombre_de_reservation ; i++){
                   if(strcasecmp(reservation[i].nom,recherche)==0){
                      printf("  Nom: %s\n", reservation[i].nom);
                        printf("  Prénom: %s\n", reservation[i].prenom);
                        printf("  Numéro de téléphone: %s\n", reservation[i].telephone);
                        printf("  Âge: %d\n", reservation[i].age);
                        printf("  Statut: %s\n", reservation[i].statut);
                        printf("  Date de réservation: %s\n", reservation[i].date);
                        printf("  Référence: %d\n", reservation[i].reference);
                        printf("------------------------------------------\n");
                }
             }
            } else if (choisir == 2){
                char rech[50];
                printf("entre le date de client tu veux recherche :");
                scanf("%s",rech);
                for(int i=0 ; i<nombre_de_reservation ; i++){
                   if(strcmp(reservation[i].date,rech)==0){
                     printf("  Nom: %s\n", reservation[i].nom);
                        printf("  Prénom: %s\n", reservation[i].prenom);
                        printf("  Numéro de téléphone: %s\n", reservation[i].telephone);
                        printf("  Âge: %d\n", reservation[i].age);
                        printf("  Statut: %s\n", reservation[i].statut);
                        printf("  Date de réservation: %s\n", reservation[i].date);
                        printf("  Référence: %d\n", reservation[i].reference);
                        printf("------------------------------------------\n");

                }
             }
            }else if(choisir == 3){
                int recherchee;
                printf("\nentre la reference de client tu veux recherche :");
                scanf("%d",&recherchee);
                for(int i=0 ; i<nombre_de_reservation ; i++){

                   if(reservation[i].reference == recherchee){
                        printf("  Nom: %s\n", reservation[i].nom);
                        printf("  Prénom: %s\n", reservation[i].prenom);
                        printf("  Numéro de téléphone: %s\n", reservation[i].telephone);
                        printf("  Âge: %d\n", reservation[i].age);
                        printf("  Statut: %s\n", reservation[i].statut);
                        printf("  Date de réservation: %s\n", reservation[i].date);
                        printf("  Référence: %d\n", reservation[i].reference);
                        printf("------------------------------------------\n");
                        break;
                    }
             }

            }





}



void Statistiques(){
    int choisir ;

    printf("entre le choix prefier:\n");
    printf("1.la moyenne d age des patients ayant reserve:\n");
    printf("2.le nombre de patients par tranche d age:\n");
    printf("3.nombre total de reservations par statut:\n ");
    scanf("%d",&choisir);


        if(choisir==1){
                int somme =0;
                int moyenne ;
               for(int i=0 ; i<nombre_de_reservation ; i++){
               somme+=reservation[i].age;
            }
            moyenne=somme/nombre_de_reservation;
            printf("la moyenne d age de reservation est: ");
            printf("%d",moyenne);

        }


         else if(choisir==2){
                int cmp=0;
                int cmp1=0;
                int cmp2=0;
                for(int i=0 ;i < nombre_de_reservation;i++){
            if(reservation[i].age>0 && reservation[i].age<=18){
                    cmp++;

            }

            else if(reservation[i].age>18 && reservation[i].age<=35){
                cmp1++;
            }else{
                cmp2++;
            }
            }


            printf("le nombre des patients  inferieur  a 18 ans:%d\n",cmp);
            printf("le nombre des patients  entre 19 et 35:%d\n",cmp1);
            printf("le nombre des patients  plus de 35ans:%d\n",cmp2);
        }
      else if(choisir==3){
             int conteur=0;
             int conteur1=0;
             int conteur2=0;
             int conteur3=0;
            for(int i=0 ;i < nombre_de_reservation;i++){
                    if(strcasecmp(reservation[i].statut,"valide"==0)){
                            conteur++;
                    }
                     else if( strcasecmp(reservation[i].statut,"reporte")==0){
                        conteur1++;
                    }
                    else if(strcasecmp(reservation[i].statut,"annule")==0){
                        conteur2++;
                    }
                    else if (strcasecmp(reservation[i].statut,"traite")==0){
                        conteur3++;
                    }


            }

            printf("\nnombre total de réservations par statut(valide) : %d",conteur);

            printf("\nnombre total de réservations par statut(reporte): %d",conteur1);

            printf("\nnombre total de réservations par statut(annule) : %d", conteur2);

            printf("\nnombre total de réservations par statut (traite): %d", conteur3);


      }



}




int main(){

    int choix ;
    puts("\n********************BIENVENUE__A__APPLICATION_GERER_LES_RESERVATION_DE RENDEZ_VOUS_DENTAIRE***************\n");

    do{


            puts("\nchoisir votre choix.......................\n");
            puts("1.ajouter une reservation :");
            puts("2.Afficher les details d une reservation :");
            puts("3.Modifier une reservation : ");
            puts("4.supprimer une reservation :");
            puts("5.Tri des reservations:");
            puts("6.recherche une reservation :");
            puts("5.suprimer une reservation :");
            puts("7.stastique :");
            puts("8.fermer le programme:");
            printf("entre votre choix:");
            scanf("%d",&choix);
            switch(choix){
            case 1:
                ajouter_un_reservation();
                break;

            case 2:
                afficher_reservation();
                break;
            case 3:
                modifier_un_reservation();

                break;
            case 4:
                suprimer_un_reservation();

                break;
            case 5:
                tri_des_reservations();
                break;
            case 6:
                Recherche_des_reservations();

                break;
            case 7:
                Statistiques();
                break;
            default:
                printf("entre correcte choix");



            }


    }while(choix !=8);


    return 0;

}
