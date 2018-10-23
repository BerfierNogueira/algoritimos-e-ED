#include "../../stack.h"
#include <stdlib.h>

STACK *aloca()
{
 STACK *novo=(STACK *) malloc(sizeof(STACK));
 if(!novo){
  printf("Sem memoria disponivel!\n");
  exit(1);
 }else{
  printf("Novo elemento: (somente inteiros)"); scanf("%d", &novo->number);
  novo->node = NULL;
  return novo;
 }
}


void inicia(STACK *PILHA){
    PILHA->node = NULL;
}

void exibe(STACK *PILHA){
    if(isEmpty(PILHA)){
        printf("\nPilha vazia!\n");
        return;
    }
    STACK * tmp;
    int count = 0; int * array = (int *) malloc(sizeof(int));
    for(tmp = PILHA->node; tmp != NULL; tmp = tmp->node){
        /*printf("Número %d: %d\n", ++i, tmp->number);*/
        array = (int *) realloc(array, (++count) * sizeof(int));
        if(array == NULL){
            printf("\tErro, o ponteiro não pode ser criado\n"); free(array); break;
        }
        array[count-1] = tmp->number;
    }
    int i;
    printf("\nTopo -> ");
    for(i = count; i>0; i--){
        printf("Número %d: %d\n", i, array[i-1]);
    }
    free(array);
    getchar();
}
void libera(STACK *PILHA){
    STACK * p = PILHA, *old;
    while(p != NULL){
        old = p;
        p = p->node;
        free(old);
    }
}
void push(STACK *PILHA){
    STACK * newNode = aloca();
    STACK * p = PILHA;
    if(isEmpty(p))
    {
        p->node = newNode; return;
    }
    while(p->node != NULL){
        p = p->node;
        printf("\tTeste\n\t");
    }
    p->node = newNode;
    PILHA->top = p->node;
}


STACK *pop(STACK *PILHA){
    return NULL;
}


int isEmpty(STACK * stack){
    return (stack->node == NULL);
}
