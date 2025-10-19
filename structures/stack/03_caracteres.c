#include <stdio.h>
#define MAX 5

char pilha[MAX]; // Define o tamanho máximo da pilha como 5 elementos
int topo = 0; // Variável que indica o topo da pilha (quantos elementos há atualmente)

void push(char c)
{
    if (topo >= MAX)
    {
        printf("PILHA CHEIA!\n");
        return;
    }
    pilha[topo++] = c; // Insere o valor e depois incrementa o topo
}

char pop()
{
    if (topo == 0)
    {
        printf("PILHA VAZIA!\n");
        return '\0';
    }
    return pilha[--topo];  // Decrementa o topo e retorna o valor que estava no topo anterior
}

int main()
{
    // Empilha três caracteres
    push('A');
    push('B');
    push('C');

    // Remove o último caractere inserido e mostra qual foi removido
    printf("Removido %c\n", pop());

    // Exibe os elementos restantes na pilha
    for (int i = 0; i < topo; i++)
        printf("%c ", pilha[i]);

    printf("\n");
    
    return 0;
}