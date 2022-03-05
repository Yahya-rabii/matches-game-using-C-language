#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int a;


void menu_principal();





void menu_principal()
{
    system ("cls");
    printf ("\t\t\t     jeu d'allumettes ");
    printf ("\n");
    printf ("\n");
    printf ("\t\t\t\t*********\n");
    printf ("\n");
    printf ("\n");
    printf ("\t\t\t  projet du nadia et yahya \n");
    printf ("\n");
    printf ("\n");
    printf ("\t\t\t\t*********\n");
    printf ("\n");
    printf ("\n");
    printf ("\n");



    system ("pause");
    system ("cls");


    printf("1 : joueur vs joueur\n");
    printf("2 : joueur vs ordinateur\n");
    printf("3 : quitter\n\n\n");
    do{
    printf("votre choix :\t");


     scanf("%d",&a);
     }while(a>3);
    }


    void joueur_joueur();


void joueur_joueur()
{system ("cls");
              int alum=20,b;
              printf("1:choisir un nombre allumette \n");
              printf("2:utiliser un nombre aleatoire allumette \n\n\n");
              printf("votre choix :\t");
              do{
              scanf("%d",&b);





              if(b==1){system ("cls");
                       int i,c;
                    do{
                    printf("donne un nombre allumette \n");
                    scanf("%d",&alum);
                      }while(alum<=1);





                    printf("jeu entre joueur 1 et joueur 2 avec %d alumette",alum);
                    printf("\n");





                    do{
                    for(i=0;i<alum;i++){printf("|");}
                    printf("\n");
                    printf("il reste %d allumettes \n",alum);






                    printf("combien prenez vouz d'allumettes joueur 1 ?\t");
                    scanf("%d",&c);




                    if(c<alum&&c>0){
                    alum=alum-c;
                    if(alum==1){printf("bravo joueur 1 vous gagne\n");}


                    else if(alum>1){for(i=0;i<alum;i++){printf("|");}
                    printf("\n");
                    printf("il reste %d allumettes \n",alum);



                    printf("combien prenez vouz d'allumettes joueur 2 ?\t");
                    do{
                    scanf("%d",&c);



                    if(c<alum&&c>0){
                    alum=alum-c;
                    if(alum==1){printf("joueur 2 bravo vous gagne\n");}}





                     else { printf("ereur\n");
                     printf("combien prenez vouz d'allumettes joueur 2 ?\t");}
                      }while(c>=alum );
                      }
                      else if (alum<1){printf("erreur");}
                      }


                      }while(alum>1);}








     else if (b==2){
                  system ("cls");
                       int i,c;






                    printf("jeu entre joueur 1 et joueur 2 avec %d alumette",alum);
                    printf("\n");





                    do{
                    for(i=0;i<alum;i++){printf("|");}
                    printf("\n");
                    printf("il reste %d allumettes \n",alum);






                    printf("combien prenez vouz d'allumettes joueur 1 ?\t");
                    scanf("%d",&c);




                    if(c<alum&&c>0){
                    alum=alum-c;
                    if(alum==1){printf("bravo joueur 1 vous gagne\n");}




                    else if(alum>1){for(i=0;i<alum;i++){printf("|");}
                    printf("\n");
                    printf("il reste %d allumettes \n",alum);



                    printf("combien prenez vouz d'allumettes joueur 2 ?\t");
                    do{
                    scanf("%d",&c);



                    if(c<alum&&c>0){
                    alum=alum-c;
                    if(alum==1){printf("joueur 2 bravo vous gagne\n");}}





                     else{ printf("ereur\n");
                     printf("combien prenez vouz d'allumettes joueur 2 ?\t");}
                      }while(c>=alum);
                      }
                      else if (alum<1){printf("erreur");}
                      }
                      }while(alum>1);}







         else{
                printf("erreur\n\n");
                printf("votre choix :\t");
                }
        }while(b>2);}



 void joueur_ordinateur();


void joueur_ordinateur(){system ("cls");
              int alum=20,b;
              printf("1:choisir un nombre allumette \n");
              printf("2:utiliser un nombre aleatoire allumette \n");
              printf("votre choix :\t");
              do{
              scanf("%d",&b);





        if(b==1){system ("cls");
                       int i,c;
                    do{
                    printf("donne un nombre allumette \n");
                    scanf("%d",&alum);
                      }while(alum<=1);





                    printf("jeu entre joueur et ordinateur avec %d alumette",alum);
                    printf("\n");





                    do{
                    for(i=0;i<alum;i++){printf("|");}
                    printf("\n");
                    printf("il reste %d allumettes \n",alum);






                    printf("combien prenez vouz d'allumettes joueur ?\t");
                    scanf("%d",&c);
                    if(c<alum&&c>0){
                    alum=alum-c;
                    if(alum==1){printf("bravo joueur vous gagne\n");}






                    else{int x;
                    srand(time(NULL));
                    x=rand()%5;
                    for(i=0;i<alum;i++){printf("|");}
                    printf("\n");
                    printf("il reste %d allumettes \n",alum);
                    printf("l'ordinateue prene %d alumette",x);
                    alum=alum-x;
                    if(alum==1){printf("joueur vous perdu\n");}}
                     }
                     else{printf("erreur");}
                      }while(alum>1);}








     else if (b==2){
                  system ("cls");
                       int i,c;





                    printf("jeu entre joueur et l'ordinateur  avec %d alumette ",alum);
                    printf("\n");





                    do{
                    for(i=0;i<alum;i++){printf("|");}
                    printf("\n");
                    printf("il reste %d allumettes \n",alum);






                    printf("combien prenez vouz d'allumettes joueur  ?\t");
                    scanf("%d",&c);
                    if(c<alum&&c>0){
                    alum=alum-c;
                    if(alum==1){printf("bravo joueur vous gagne\n");}





                    else{int x;
                    srand(time(NULL));
                    x=rand()%5;
                    for(i=0;i<alum;i++){printf("|");}
                    printf("\n");
                    printf("il reste %d allumettes \n",alum);
                    printf("l'ordinateue prene %d alumette\n",x);
                    alum=alum-x;
                    if(alum==1){printf("joueur vous perdu\n");}}




                    }
                    else{printf("erreur\n");}
                    }while(alum>1);}





                     else if (b>2){
                            printf("erreur\n");
                            printf("votre choix :\t");



                                  }
                            }while(b>2);}
      void merci();
 void merci(){printf("merci pour votre visite\n");}


      void erreur();
void erreur(){printf("erreur\n");
                    printf("votre choix :\t");}



void main()
    {
     menu_principal();
    if(a==1){joueur_joueur();}
    else if(a==2){joueur_ordinateur();}
    else if(a==3){merci();}
    else{erreur();}
    }
