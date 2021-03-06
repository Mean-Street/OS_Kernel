#ifndef __CONSOLE_H__
#define __CONSOLE_H__

#include <inttypes.h>
#include <cpu.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <ordonnanceur.h>

#define CLOCKFREQ 50

extern uint32_t TOTAL_TIME;

typedef struct pos_curseur {
	uint32_t lig;
	uint32_t col;
} pos_curseur;
/*
 * This is the function called by printf to send its output to the screen. You
 * have to implement it in the kernel and in the user program.
 */
void ecrit_temps(const char* s);

extern void console_putbytes(const char *s, int len);

#endif
