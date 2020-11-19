#ifndef DEFINE_H_INCLUDED
#define DEFINE_H_INCLUDED

extern void guessChar(char *c_char);
extern void affichage(int longCh, char c_ChGuess[8], char c_pendu[7][5]);
extern char * checkChar(char c_char,int longCh,int *nbIncorrect,char c_Chaine[],char c_ChGuess[]);
extern char * modifAffich(int nbIncorrect, char c_pendu[][5]);
extern int VerifVictoire(int nbIncorrect, int longCh, char c_Chaine[], char c_ChGuess[]);

#endif // DEFINE_H_INCLUDED
