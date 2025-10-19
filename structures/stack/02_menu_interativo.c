#include <stdio.h>
#define MAX 5 // Define o tamanho máximo da pilha

int pilha[MAX]; // Vetor que armazena os elementos da pilha
int topo = 0;   // Indica o topo da pilha (quantos elementos tem)

void push() // Função para empilhar (inserir um elemento)
{
    if (topo >= MAX) // Verifica se a pilha está cheia
    {
        printf("PILHA CHEIA!\n");
        return;
    }
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    pilha[topo++] = valor;
}

void pop() // Função para desempilhar (remover o último elemento)
{
    if (topo == 0)
    {
        printf("PILHA VAZIA!\n");
        return;
    }
    printf("Removido: %d\n", pilha[--topo]); // Decrementa o topo e mostra o valor removido
}

void imprimir()
{

    for (int i = 0; i < topo; i++) // Percorre do início até o topo
        printf("%d", pilha[i]);    // Mostra cada elemento
    printf("\n");
}

int main()
{
    int op; // Variável para armazenar a opção do usuário

    do
    {
        printf("\n1-Push 2-Pop 0-Sair: "), scanf("%d", &op);
        if (op == 1)
            push(); // Insere um elemento
        else if (op == 2)
            pop(); // Remove o último elemento

        imprimir(); // Mostra o estado atual da pilha

    } while (op != 0); // Repete até o usuário digitar 0 (sair)
    return 0;
}