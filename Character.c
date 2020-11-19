#include "define.h"

void guessChar(char *c_char){
    printf("Veuillez entrer une lettre\n");
    *c_char=getchar();
}

char * checkChar(char c_char,int longCh,int *nbIncorrect,char c_Chaine[],char c_ChGuess[]){
    int nbCorrecte=0;
    //si une lettre est présente, on l'ajoute dans la chaine à trouver
    for(int i=0;i<longCh;i++){
        if(tolower(c_Chaine[i])==tolower(c_char)){
            c_ChGuess[i]=tolower(c_char);
            nbCorrecte++;
        }
    }
    if(nbCorrecte==0){
        //printf("Salut");
        *nbIncorrect+=1;
    }
    return c_ChGuess;
}

int VerifVictoire(int nbIncorrect, int longCh, char c_Chaine[], char c_ChGuess[]){
    int nbCorrect=0;
    if(nbIncorrect==6){
        printf("\nperdu\n");
        printf("La reponse etait : %s", c_Chaine);
        return 2;
    }
    for(int i=0;i<longCh;i++){
        if(tolower(c_Chaine[i])==tolower((c_ChGuess[i]))){
            nbCorrect++;
        }
    }
    if(nbCorrect==longCh){
        printf("\nvictoire");
        return 1;
    }
    return 0;
}
