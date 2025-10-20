#include <stdio.h>
#define MAX 5

int fila[MAX];
int frente = 0; // indica o índice do primeiro elemento da fila (para remover).
int tras = 0;   //  indica o índice da próxima posição livre para adicionar um elemento.

void enfileirar(int valor)
{
    if (tras >= MAX)
    {
        printf("FILA CHEIA!\n");
        return;
    }
    fila[tras++] = valor;
    // Adiciona o valor na posição 'tras' da fila.
    // Depois incrementa 'tras' para apontar para a próxima posição livre.
}

int retirarDaFila()
{
    if (frente == tras) // Se 'frente' for igual a 'tras', não há elementos na fila para remover.
    {
        printf("FILA VAZIA!\n");
        return -1; // Mostra uma mensagem e retorna -1 como indicativo de erro.
    }
    return fila[frente++];
}

void imprimir()
{
    printf("FILA: ");
    for (int i = frente; i < tras; i++)
        printf("%d", fila[i]);
    // Percorre o array da posição 'frente' até 'tras - 1'.
    // Imprime todos os elementos da fila.

    printf("\n");
}

int main()
{
    enfileirar(10);
    enfileirar(20);
    enfileirar(30);
    // Adiciona 3 elementos à fila.

    imprimir();
    // Mostra a fila atual: 10 20 30

    printf("REMOVIDO: %d\n", retirarDaFila());
    // Remove o elemento do início da fila (10) e mostra na tela.

    imprimir();
    // Mostra a fila após a remoção: 20 30

    return 0;
}