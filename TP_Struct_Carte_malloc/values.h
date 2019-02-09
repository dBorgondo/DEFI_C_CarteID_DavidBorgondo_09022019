#ifndef VALUES_H_INCLUDED
#define VALUES_H_INCLUDED
#define SIZEB 150
#define SIZENAMES 20
#define SIZEADRESS 40
#define SIZECODE 7
#define NBINFO 7
#define PATH "cartes.txt"
#define SIZEBUFFERFICHIER 500

typedef struct identite{
    int id;
    char* nom;
    char* prenom;
    char* adresse;
    char* ville;
    char* codepostal;
}identite;


#endif // VALUES_H_INCLUDED
