// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct reservationp_type {
    char nom[50];
    char prenom[50];
    char telephone [50];
    char statut[50];
    char Date [50];
    char Reference[100];
    int age ;
}reservation;

reservation_type reservations [100];
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
    scanf("%s",reservation[nombre_de_reservation].Date);
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
            printf(" la date de reservation :%s",reservation[i].Date);
            printf(" la reference : %s",reservation[i].reference);

    }
}
void Recherche_des_reservations(){
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
                printf("la date de reservation :%s",reservation[i].Date);
                printf("la reference : %s",reservation[i].reference);

        }
    }
}
void Statistiques(){
    int choisir ;
    printf("1.la moyenne d age des patients ayant reserve");
    printf("2.le nombre de patients par tranche d age");
    scanf("%d",&choisir);
    for(int i=0 ; i<nombre_de_reservation ; i++){
        if(choisir==1){
                int somme =0;
                int moyenne ;
               for(int i=0 ; i<nombre_de_reservation ; i++){
               somme+=reservation[i].age;
            }
            moyenne=somme/nombre_de_reservation;
            
        }
        else(choisir==2){
                int cmp=0;
            if(age>0 && age<=18){
                    cmp--;
                
            }
                
            
        }
    }
    
    
    
    
}





int main(){
    int choix ;
    do{

    }


    return 0;

}
