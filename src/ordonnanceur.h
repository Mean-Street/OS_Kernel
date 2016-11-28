#ifndef ORDONNANCEUR_H
#define ORDONNANCEUR_H

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <proc_list.h>

#define TAILLE_PILE 512
#define NB_PROC_MAX 8


proc_list* init_list(void);
void init_idle(char* nom);
int32_t cree_processus(void (*code)(void), char* nom);
void ordonnance(void);
void ctx_sw(int32_t* old_reg, int32_t* new_reg);
void idle(void);
void proc1(void);

#endif
