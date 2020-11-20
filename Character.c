#include "define.h"

void guessChar(char *c_char){
    do{
    printf("Veuillez entrer une lettre\n");
    *c_char=getchar();
    }while(*c_char=='\n');
}

char * checkChar(char c_char,int longCh,int *nbIncorrect,char c_Chaine[],char c_ChGuess[]){
    int nbCorrecte=0;
    //si une lettre est présente, on l'ajoute dans la chaine à trouver
    for(int i=0;i<longCh;i++){
        if(c_Chaine[i]==tolower(c_char)){
            c_ChGuess[i]=tolower(c_char);
            nbCorrecte++;
        }
    }
    if(nbCorrecte==0){
        (*nbIncorrect)++;
    }
    return c_ChGuess;
}

int VerifVictoire(int nbIncorrect, int longCh, char c_Chaine[], char c_ChGuess[]){
    if(nbIncorrect==6){
        printf("\nPerdu\n");
        printf("La reponse etait : %s", c_Chaine);
        return 2;
    }
    int result=strcmp(c_Chaine,c_ChGuess);
    if(result==0){
        printf("\nVictoire");
        return 1;
    }
    return 0;
}
