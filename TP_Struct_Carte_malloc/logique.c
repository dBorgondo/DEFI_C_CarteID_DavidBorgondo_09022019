#include <stdio.h>
#include <stdlib.h>
#include "values.h"
#include <string.h>
/*-----------------------------------
 Descriptions :Remplie la carte donner en entree
 Entrées :Carte
 Sorties :Carte remplie
-----------------------------------*/
void fillIdentite(struct identite* carte){
    char cBuffer[50];//On utilise un Buffer pour servir de tampon aux informations entree avant qu'elle soit entre dans la structure
    printf("\nVeuillez entrer le nom :\n");
    gets(cBuffer);
    carte->nom=malloc(strlen(cBuffer));
    strcpy(carte->nom,cBuffer);
    printf("Veuillez entrer le prenom :\n");
    gets(cBuffer);
    carte->prenom=malloc(strlen(cBuffer));
    strcpy(carte->prenom,cBuffer);
    printf("Veuillez entrer l'adresse:\n");
    gets(cBuffer);
    carte->adresse=malloc(strlen(cBuffer));
    strcpy(carte->adresse,cBuffer);
    printf("Veuillez entrer la ville :\n");
    gets(cBuffer);
    carte->ville=malloc(strlen(cBuffer));
    strcpy(carte->ville,cBuffer);
    printf("Veuillez entrer le code postal:\n");
    gets(cBuffer);
    carte->codepostal=malloc(strlen(cBuffer));
    strcpy(carte->codepostal,cBuffer);
}

/*-----------------------------------
 Descriptions : Libére la mémoire des pojnteurs d'une carte
 Entrées :Carte
 Sorties :Carte avec ses mémoires vide
-----------------------------------*/
void freeCarte(struct identite* carte){
    free(carte->nom);
    free(carte->prenom);
    free(carte->adresse);
    free(carte->ville);
    free(carte->codepostal);
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
