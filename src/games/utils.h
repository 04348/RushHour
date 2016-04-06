#ifndef _UTILS_
#define _UTILS_

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

typedef struct Input
{
 
    int left, right, up, down, enter, erase, pause, newGame, escape, quit, mouse_x, mouse_y, mouse;
 
} Input;


extern int rules; //Variable globale utilis�e pour determiner quelles r�gles de jeu doivent �tre utilis�es

char *dir_c[4]; //Uniquement utile pour comparer avec l'input

/*
Retourne un nombre al�atoire en a et b (compris).
*/
int rand_ab(int a, int b);

/*
Retourne vrai si les 2 chaines sont exactement identiques.
*/
bool streq(char* s1, char* s2);

/*
D�compose le char* cmd pour y retrouver les 3 arguments utiles :
la pi�ce cibl�e, la direction du mouvement et la distance � parcourir.
Renvoie vrai si elle trouve les 3 arguments correctement, faux sinon.
*/
bool readCommand(char *cmd, game g, bool (*game_over)(cgame), int* target, int* direction, int* distance);

void gestionInputs(Input *input);

void delay(unsigned int frameLimit);

#endif