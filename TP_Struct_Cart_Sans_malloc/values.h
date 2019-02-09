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
    char nom[SIZENAMES];
    char prenom[SIZENAMES];
    char adresse[SIZEADRESS];
    char ville[SIZENAMES];
    char codepostal[SIZECODE];
}identite;


#endif // VALUES_H_INCLUDED
