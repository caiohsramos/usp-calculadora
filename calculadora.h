#ifndef _CALCULADORA_H_
#define _CALCULADORA_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FALSE 0
#define TRUE 1

typedef struct pilha_ PILHA;
typedef struct no_ NO;
typedef struct item_ ITEM;

PILHA *criaPilha();
int empilhar(PILHA *, ITEM);
int desempilhar(PILHA *, ITEM *);
int vazia(PILHA *);
void imprimePilha(PILHA *);
float calculaResultado(char *expressao);

//cabecalhos...

#endif
