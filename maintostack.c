#include <stdio.h>
#include <stdlib.h>
#include "../../stack.h"

void opcao(STACK *PILHA, int op);
int menu(void);
void removeStack(STACK * PILHA);

int main(){

    printf("Worked fine");

    printf("\n");

    STACK stack;
    int opt;
    inicia(&stack);
    if(stack.node == NULL)
    printf("\nOK");
    do{
        opt = menu();
        opcao(&stack, opt);
        system("clear");
    }while(opt);

    return 0;
}

void opcao(STACK *PILHA, int op){
     switch(op){
      case 0:
       libera(PILHA);
       break;

      case 1:
       libera(PILHA);
       inicia(PILHA);
       break;

      case 2:
       exibe(PILHA);
       break;

      case 3:
       push(PILHA);
       break;

      case 4:
       removeStack(PILHA);
       break;

      default:
       printf("Comando invalido\n\n");
    }
}

int menu(void)
{
 int opt;

 printf("Escolha a opcao\n");
 printf("0. Sair\n");
 printf("1. Zerar PILHA\n");
 printf("2. Exibir PILHA\n");
 printf("3. PUSH\n");
 printf("4. POP\n");
 printf("Opcao: "); scanf("%d", &opt);

 return opt;
}

void removeStack(STACK * PILHA)
{
    STACK * tmp= pop(PILHA);
    if(tmp != NULL){
        printf("Retirado: %3d\n\n", tmp->number);
    }
    return;
}
