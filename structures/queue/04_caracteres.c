#include <stdio.h> // Biblioteca padrão para entrada e saída (printf, etc)
#define MAX 5      // Define o tamanho máximo da fila (capacidade: 5 elementos)

char fila[MAX];           // Vetor que armazena os elementos da fila (cada posição guarda um char)
int frente = 0, tras = 0; // Índices que indicam o início (frente) e o final (tras) da fila

void enqueue(char c)
{
    if (tras >= MAX)  // Se o final já chegou ao limite do vetor
    {
        printf("FILA CHEIA!\n");
        return;  // sai da função sem inserir nada
    } 
    fila[tras++] = c; // adiciona o elemento e depois incrementa 'tras'
}

char dequeue()
{
    if (frente == tras)
    {
        printf("FILA VAZIA!\n");
        return;// sai da função sem remover nada
    }
    return fila[frente++];
}

void imprimir()
{
    printf("FILA: ");
    for (int i = frente; i < tras; i++)  // percorre apenas os elementos válidos
    {
        printf("%c", fila[i]);   // imprime cada elemento da fila
    }
    printf("\n");
}

int main()
{
    enqueue('A');
    enqueue('B');
    enqueue('C');
    enqueue('D');
    imprimir(); // Mostra: FILA: ABCD
    printf("Removido: %c\n", dequeue()); // Remove e mostra o primeiro (A)
    imprimir(); // Mostra: FILA: BCD
    return 0;
}