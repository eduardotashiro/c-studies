#include <stdio.h> // Biblioteca padrão para entrada e saída
#define MAX 5      // Define o tamanho máximo da fila (número de posições)

int fila[MAX];  // Array que representa a fila
int frente = 0; // Índice do primeiro elemento (quem vai sair)
int tras = 0;   // Índice do último elemento (onde o próximo entra)

// Função que verifica se a fila está cheia
// A fila está cheia quando a posição seguinte de 'tras' é igual a 'frente'
// Isso garante que sempre haja uma posição vazia para diferenciar cheia de vazia
int cheia()
{
    return (tras + 1) % MAX == frente;
}

// Função que verifica se a fila está vazia
// A fila está vazia quando 'frente' e 'tras' estão na mesma posição
int vazia()
{
    return frente == tras;
}

void enfileirar(int valor)
{
    if (cheia()) // Verifica se há espaço
    {
        printf("FILA CHEIA!\n");
        return; // Sai da função
    }
    fila[tras] = valor;      // Coloca o valor na posição 'tras'
    tras = (tras + 1) % MAX; // Avança 'tras' circularmente usando módulo, (% resto da divisão)
}

int retirarDaFila()
{
    if (vazia()) // Verifica se há elementos
    {
        printf("FILA VAZIA!\n");
        return -1; // Retorna -1 como erro
    }
    int valor = fila[frente];    // Guarda o valor que será removido
    frente = (frente + 1) % MAX; // Avança 'frente' circularmente
    return valor;                // Retorna o valor removido
}

void imprimir()
{
    printf("FILA: \n");
    int i = frente;  // Começa do primeiro elemento
    while (i != tras)  // Enquanto não chegar no índice 'tras'
    {
        printf("%d", fila[i]);  // Imprime o elemento atual
        i = (i + 1) % MAX;  // Avança circularmente
        printf("\n");  // Quebra de linha para cada elemento
    }
}

int main()
{
    enfileirar(1);
    enfileirar(2);
    enfileirar(3);
    enfileirar(4);  //MAX = 5, mas podemos colocar apenas 4 elementos

    imprimir();

    printf("REMOVIDO: %d\n", retirarDaFila());

    imprimir();

    enfileirar(5);  // Adiciona mais um elemento (aproveitando a posição liberada)

    imprimir();

    return 0;
}