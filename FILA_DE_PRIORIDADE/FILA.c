//
//  FILA.c
//  FILA_DE_PRIORIDADE
//
//  Created by César de Souza on 03/11/22.
//

#include "FILA.h"

void criaFila(Fila *fila){
    fila->primeiro=NULL;
    fila->tam=0;
    fila->fim=NULL;
}

void inserir(Fila *fila, int num){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->valor= num;
        novo->proximo=NULL;
        if(fila->primeiro==NULL){
            fila->primeiro=novo;
            fila->fim=novo;
        }else{
            if(num>59){ //testa se é prioridade
                if(fila->primeiro->valor<59){  //testa se é a 1º prioridade
                    novo->proximo=fila->primeiro;
                    fila->primeiro=novo;
                }else{
                    
                }
            }else{
                fila->fim->proximo=novo;
                fila->fim=novo;
            }
            
        }
        fila->tam++;
    }else{
        printf("\nErro ao alocar memória\n");
    }
}
void inserirPrioridade(Fila *fila, int num){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->valor= num;
        novo->proximo=NULL;
        if(fila->primeiro==NULL){
            fila->primeiro=novo;
            fila->fim=novo;
        }else{
            if(num<63)
            fila->fim->proximo=novo;
            fila->fim=novo;
        }
        fila->tam++;
    }else{
        printf("\nErro ao alocar memória\n");
    }
}
No* remover(Fila *fila){
    No *remover=NULL;
    if(fila->primeiro){
        remover=fila->primeiro;
        fila->primeiro=remover->proximo;
        fila->tam--;
    }else{
        printf("\nFila vazia\n");
    }
    return remover;
}
void imprimir(Fila *fila){
    No *aux = fila->primeiro;
    printf("\n----------FILA----------\n\t");
    while (aux) {
        printf("%i\t", aux->valor);
        aux=aux->proximo;
    }
    printf("\n--------FIM FILA--------\n");
}

