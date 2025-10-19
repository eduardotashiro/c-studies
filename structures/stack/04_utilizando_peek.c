#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída (para printf)
#define MAX 5  // Define o tamanho máximo da pilha (constante)

int pilha[MAX]; // Vetor que armazena os elementos da pilha
int topo = 0;  // Índice do topo da pilha (quantos elementos ela tem atualmente)


void push(int valor)
{
    if (topo < MAX)   // Verifica se ainda há espaço na pilha
        pilha[topo++] = valor; // Adiciona o valor e depois incrementa 'topo'
    else
        printf("PILHA CHEIA!\n");
}

int pop()
{
    if (topo > 0)
        return pilha[--topo]; // Decrementa 'topo' e retorna o valor que estava lá
    else
        return -1;  // Retorna -1 caso a pilha esteja vazia
}


/*
 * Função: peek
 * Objetivo: mostrar o valor do topo sem removê-lo da pilha
 */

int peek()
{
    if (topo > 0)
       return pilha[topo - 1]; // Retorna o valor atual do topo
    else
        return -1;
}


/*
 * Função principal (main)
 * Demonstra o uso das funções push, pop e peek
 */

int main(){
    push(5);
    push(15);
    push(25);

    printf("Topo: %d\n",peek());
    printf("Removido: %d\n",pop());
    printf("Topo: %d\n", peek());
    
    return 0;
}