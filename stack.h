#ifndef STACK_INCLUDED
#define STACK_INCLUDED

typedef struct stacky{
    int number;
    struct stacky * node, * top;
}STACK;


void inicia(STACK *PILHA);


void exibe(STACK *PILHA);
void libera(STACK *PILHA);
void push(STACK *PILHA);
STACK *pop(STACK *PILHA);

int isEmpty(STACK * stack);

STACK *aloca();

#endif // STACK_INCLUDED
