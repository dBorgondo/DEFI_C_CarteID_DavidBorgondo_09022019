#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "values.h"
/*-----------------------------------
 Descriptions :Affiche le contenu du fichier txt
 Entrées :
 Sorties : Affichage du fichier
-----------------------------------*/
void lire(){
    FILE *pFile;
    char sString[SIZEBUFFERFICHIER]="";
    char sString2[SIZEBUFFERFICHIER]="";
    pFile = fopen(PATH,"r");

    if (pFile == NULL){
        perror ("Error opening file");
    }else {
        while(fgets (sString , 255 , pFile)!=NULL){
            strcat(sString2,sString);
        }
    }
    fclose(pFile);
    puts (sString2);
}
/*-----------------------------------
 Descriptions :Ajoute la chaine de caractere donne au fichier txt
 Entrées :Chaine de caractere
 Sorties :Fichier avec la chaine de caractere ajouter
-----------------------------------*/
void ajouter(char buffer[SIZEB]){
    FILE *pFile;
    if (((pFile=fopen(PATH,"a")))==NULL){
        creer();
    }else{
        pFile = fopen(PATH,"a");
        fputs(buffer,pFile);
        fclose(pFile);
    }

}
/*-----------------------------------
 Descriptions :Cree le fichier txt si il n'existe pas encore
 Entrées :
 Sorties :Fichier cree
-----------------------------------*/
void creer(){

    FILE *pFile;

    system("cls");
    if (((pFile=fopen(PATH,"a")))==NULL){
        perror("Erreur de creation de fichier");
    }else{
        pFile = fopen(PATH,"a");
        fclose(pFile);

    }

}
