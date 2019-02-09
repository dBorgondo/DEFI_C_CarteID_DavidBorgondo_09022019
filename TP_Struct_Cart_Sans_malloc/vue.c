#include "values.h"
#include "logique.h"
#include <stdio.h>
/*-----------------------------------
 Descriptions : Affiche les informations d'une carte
 Entrées :Carte
 Sorties :Affichage d'une carte
-----------------------------------*/
void printIdentite(struct identite carte){
    printf("\n Nom : %s\n",carte.nom);
    printf("\n Nom : %s\n",carte.prenom);
    printf("\n Nom : %s\n",carte.adresse);
    printf("\n Nom : %s\n",carte.ville);
    printf("\n Nom : %s\n",carte.codepostal);

}
/*-----------------------------------
 Descriptions :Créé une chaine de caractere contenant les informations d'une carte
 Entrées : Carte, Buffer
 Sorties : Buffer avec les informations de la carte
-----------------------------------*/
void identitetoString(struct identite carte, char pBuffer[SIZEB]){
    static int ID=0;
    ID=countClients();

    snprintf(pBuffer,100,"ID : %d\nNom : %s\nPrenom : %s\nAdresse : %s\nVille : %s\nCode Postal : %s\n\n",(ID+1),carte.nom,carte.prenom,carte.adresse,carte.ville,carte.codepostal);
}
