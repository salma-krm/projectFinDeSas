// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct reservation_type {
    char nom[50];
    char prenom[50];
    char telephone [50];
    char statut[50];
    char date [50];
    char reference[100];
    int age ;
}reservation_type;


reservation_type reservation [100];
nombre_de_reservation =0;
void ajouter_un_reservation(){
    printf(" veuillez entre le nom  de client");
    scanf("%s",reservation[nombre_de_reservation].nom);
    printf(" veuillez entre le prenom de client ");
    scanf("%s",reservation[nombre_de_reservation].prenom);
    printf(" veuillez entre le numero de telephone de client ");
    scanf("%s",reservation[nombre_de_reservation].telephone);
    printf("veuillez entre L age de client ");
    scanf("%d",&reservation[nombre_de_reservation].age);
    printf("veuillez entre le statut de client ");
    scanf("%s",reservation[nombre_de_reservation].statut);
    printf("veuillez entre la date de reservation");
    scanf("%s",reservation[nombre_de_reservation].date);
    printf("veuillez entre la reference : ");
    scanf("%s",reservation[nombre_de_reservation].reference);
}
void afficher_un_reservation(){
    for(int i=0 ; i<nombre_de_reservation ; i++){
            printf("  le nom  de client:%s",reservation[i].nom);
            printf(" v le prenom de client :%s",reservation[i].prenom);
            printf(" e le numero de telephone de client :%s",reservation[i].telephone);
            printf(" L age de client :%d",reservation[i].age);
            printf(" le statut de client :%s",reservation[i].statut);
            printf(" la date de reservation :%s",reservation[i].date);
            printf(" la reference : %s",reservation[i].reference);

    }
}
void modifier_un_reservation(){
}
void Recherche_des_reservations(){
    int choisir;
    printf("entre choix de recherche tu veux prefier");
    printf("1.recherche d une reservation par nom");
    printf("2.recherche d une reservation par date");
    printf("1.recherche d une reservation par reference unique");
    scanf("%d",&choisir);

            if(choisir == 1){

                char recherche[50];
                printf("entre le nom de client tu veux recherche :");
                scanf("%s",recherche);
                for(int i=0 ; i<nombre_de_reservation ; i++){
                   if(strcasecmp(reservation[i].nom,recherche)==0){
                      printf("le nom  de client:%s",reservation[i].nom);
                      printf("le prenom de client :%s",reservation[i].prenom);
                      printf("le numero de telephone de client :%s",reservation[i].telephone);
                      printf("L age de client :%d",reservation[i].age);
                      printf("le statut de client :%s",reservation[i].statut);
                      printf("la date de reservation :%s",reservation[i].date);
                      printf("la reference : %s",reservation[i].reference);

                }
             }
            } else if (choisir == 2){
                char rech[50];
                printf("entre le date de client tu veux recherche :");
                scanf("%s",rech);
                for(int i=0 ; i<nombre_de_reservation ; i++){
                   if(strcmp(reservation[i].date,rech)==0){
                      printf("le nom  de client:%s",reservation[i].nom);
                      printf("le prenom de client :%s",reservation[i].prenom);
                      printf("le numero de telephone de client :%s",reservation[i].telephone);
                      printf("L age de client :%d",reservation[i].age);
                      printf("le statut de client :%s",reservation[i].statut);
                      printf("la date de reservation :%s",reservation[i].date);
                      printf("la reference : %s",reservation[i].reference);

                }
             }
            }else if(choisir == 3){
                char recherchee[50];
                printf("entre le date de client tu veux recherche :");
                scanf("%s",recherchee);
                for(int i=0 ; i<nombre_de_reservation ; i++){
                   if(strcmp(reservation[i].reference,recherchee)==0){
                      printf("le nom  de client:%s",reservation[i].nom);
                      printf("le prenom de client :%s",reservation[i].prenom);
                      printf("le numero de telephone de client :%s",reservation[i].telephone);
                      printf("L age de client :%d",reservation[i].age);
                      printf("le statut de client :%s",reservation[i].statut);
                      printf("la date de reservation :%s",reservation[i].date);
                      printf("la reference : %s",reservation[i].reference);

                }
             }

            }





}



void Statistiques(){
    int choisir2 ;
    printf("entre le choix prefier:");
    printf("1.la moyenne d age des patients ayant reserve");
    printf("2.le nombre de patients par tranche d age");
    scanf("%d",&choisir2);
    for(int i=0 ; i<nombre_de_reservation ; i++){
        if(choisir2==1){
                int somme =0;
                int moyenne ;
               for(int i=0 ; i<nombre_de_reservation ; i++){
               somme+=reservation[i].age;
            }
            moyenne=somme/nombre_de_reservation;

        }
         else if(choisir2==2){
                int cmp=0;
                int cmp1=0;
                int cmp2=0;
            if(reservation[i].age>0 && reservation[i].age<=18){
                    cmp++;

            }

            else if(reservation[i].age>18 && reservation[i].age<=35){
                cmp1++;
            }else{
                cmp2++;
            }
         printf("le nombre des patients  inferieur  a 18 ans:%d",cmp);
         printf("le nombre des patients  entre 19 et 35:%d",cmp1);
         printf("le nombre des patients  plus de 35ans:%d",cmp1);

        }
    }

}




int main(){
    int choix ;
    do{

            printf("\n-----------------------------\n");
            printf("...........BIENVENUE__A__APPLICATION_GERER_LES_.............\n");
            scanf("%d",&choix);


    }while(choix != 8);


    return 0;

}
