#include "define.h"

void affichage(int longCh, char c_ChGuess[8], char c_pendu[7][5]){
    //Affichage du texte a trouver
    for(int i=0;i<longCh;i++){
        printf("%c ", c_ChGuess[i]);
    }
    printf("\n");
    //Affichage du pendu
    for(int i=0;i<7;i++){
        for(int j=0;j<5;j++){
            printf("%c", c_pendu[i][j]);
        }
        printf("\n");
    }
}

char * modifAffich(int nbIncorrect, char c_pendu[][5]){
    switch(nbIncorrect){
        case 1:
            c_pendu[2][3]='o';
            break;
        case 2:
            c_pendu[3][3]='|';
            break;
        case 3:
            c_pendu[3][2]='/';
            break;
        case 4:
            c_pendu[3][4]='\\';
            break;
        case 5:
            c_pendu[4][2]='/';
            break;
        case 6:
            c_pendu[4][4]='\\';
            break;
    }
    return c_pendu;
}
