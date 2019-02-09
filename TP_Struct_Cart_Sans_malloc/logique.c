#include <stdio.h>
#include <stdlib.h>
#include "values.h"
/*-----------------------------------
 Descriptions :Remplie la carte donner en entree
 Entrées :Carte
 Sorties :Carte remplie
-----------------------------------*/
void fillIdentite(struct identite* carte){
    printf("\nVeuillez entrer le nom :\n");
    gets(carte->nom);
    printf("Veuillez entrer le prenom :\n");
    gets(carte->prenom);
    printf("Veuillez entrer l'adresse:\n");
    gets(carte->adresse);
    printf("Veuillez entrer la ville :\n");
    gets(carte->ville);
    printf("Veuillez entrer le code postal:\n");
    gets(carte->codepostal);
}
/*-----------------------------------
 Descriptions :Affiche le contenu du fichier txt
 Entrées :
 Sorties : Affichage du fichier
-----------------------------------*/
int countClients(){
    FILE *pFile;
    int count = 0;
    char c;
    pFile = fopen(PATH,"r");
    if (pFile == NULL){
        perror ("Error opening file");
    }
    else {
    for (c = getc(pFile); c != EOF; c = getc(pFile)){//On compte le nombre de ligne du fichier
        if (c == '\n'){
            count = count + 1;
        }
    }
    }
    fclose(pFile);
    return (count/NBINFO);//On divise resultat par le nombre d'information d'une carte ce qui nous donne donc le nombre de cartes
}
