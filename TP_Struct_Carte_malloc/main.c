#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"
#include "logique.h"
#include "values.h"
#include "vue.h"
int main()
{
    char buffer[SIZEB];
    struct identite carte;
    creer();
    int choice=1;
    while(choice!=3){//Demande de choix à l'utilisateur
        printf("1:Entrer une nouvelle carte identite.\n2:Affichez les cartes d'identite\n3:Pour quitter le programme.\n");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
                fflush(stdin);
                fillIdentite(&carte);//Création d'une carte avec les valeurs entré par l'utilisateur
                identitetoString(carte,buffer);//On créé un chaine contenant les infomations sur une carte
                freeCarte(&carte);
                ajouter(buffer);//On ajoute au txt la chaine cree precedement
                break;
            case 2:
                fflush(stdin);
                lire();//Afficher le fichier txt
            break;
        }
    }
    return 0;
}
