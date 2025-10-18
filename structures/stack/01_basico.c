#include <stdio.h>
#define MAX 5

int pilha[MAX]; // Define o tamanho máximo da pilha (número máximo de elementos)
int topo = 0;   // Variável que indica a "posição do topo" da pilha
// topo aponta SEMPRE para a próxima posição livre no vetor
// Exemplo: se topo = 3, significa que temos 3 elementos (índices 0, 1 e 2)

void push(int valor)
{
    if (topo >= MAX) // Verifica se a pilha já está cheia
    {
        printf("PILHA CHEIA!\n");
        return;
    }
    pilha[topo] = valor; // Coloca um novo valor na posição 'topo'
    topo++;              // Move o topo para a próxima posição livre
}

int pop()
{
    if (topo == 0) // se o topo for 0 significa q a pilha ta vazia
    {
        printf("PILHA VAZIA!\n");
        return -1; // Retorna -1 para indicar erro
    }
    topo--;             // Move o topo uma posição para baixo (removendo o último elemento)
    return pilha[topo]; // Retorna o valor que estava no topo
}

void imprimir()
{
    printf("Pilha: ");
    for (int i = 0; i < topo; i++) // Percorre do início até o topo atual
        printf("%d ", pilha[i]);   // Mostra cada valor empilhado
    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);
    imprimir();
    printf("Removido: %d\n", pop());
    imprimir();
    return 0;
}

/*
*
*
*
 
Pilha: 10 20 30 
Removido: 30
Pilha: 10 20 

*
*
*
*/