#include <stdio.h>
#include <stdlib.h>
#include "define.h"

int main()
{
    char c_Chaine[8]={'b','o','n','j','o','u','r'};
    char c_ChGuess[8]={'_','_','_','_','_','_','_'};
    char c_pendu[7][5]={{'_','_','_','_','_'},
                        {' ','|',' ','|',' '},
                        {' ','|',' ',' ',' '},
                        {' ','|',' ',' ',' '},
                        {' ','|',' ',' ',' '},
                        {' ','|',' ',' ',' '},
                        {'_','|','_',' ',' '}};

    int longCh = strlen(c_Chaine);
    int nbIncorrect=0;
    int FinDuJeu=0;

    char c_char;
    char *pc_ChGuess = &c_ChGuess;
    char *pc_pendu=&c_pendu;

    affichage(longCh,c_ChGuess,c_pendu);
    while(FinDuJeu==0){
        guessChar(&c_char);
        pc_ChGuess=checkChar(c_char,longCh,&nbIncorrect,c_Chaine,c_ChGuess);
        pc_pendu=modifAffich(nbIncorrect,c_pendu);

        affichage(longCh,c_ChGuess,c_pendu);

        FinDuJeu = VerifVictoire(nbIncorrect, longCh, c_Chaine, c_ChGuess);

        fflush(stdin);
    }




    return 0;
}
