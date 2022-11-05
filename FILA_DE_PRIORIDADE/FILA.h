//
//  FILA.h
//  FILA_DE_PRIORIDADE
//
//  Created by César de Souza on 03/11/22.
//
//git_test
#ifndef FILA_h
#define FILA_h

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;
typedef struct {
    No *primeiro;
    No *fim;
    int tam;
    
}Fila;


void criaFila(Fila *fila);

void inserir(Fila *fila, int num);
No* remover(Fila *fila);
void imprimir(Fila *fila);

#endif /* FILA_h */
