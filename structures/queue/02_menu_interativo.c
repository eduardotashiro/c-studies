#include <stdio.h>
#define MAX 5

int fila[MAX]; // Vetor que armazena os elementos da fila
int frente = 0; // Índice do primeiro elemento (quem vai sair)
int tras = 0;  // Índice do último elemento (onde o próximo entra)

void enfileirar()
{
    if (tras >= MAX) // Se o índice 'tras' chegou no limite do vetor, a fila está cheia
    {
        printf("FILA CHEIA!\n");
        return; // Sai da função sem adicionar nada
    }
    int valor;
    printf("DIGITE UM VALOR: ");
    scanf("%d", &valor);
    fila[tras++] = valor; // Coloca o valor no final e incrementa 'tras'
}

void retirarDaFila()
{
    if (frente == tras)  // Se 'frente' e 'tras' são iguais, significa que a fila está vazia
    {
        printf("FILA VAZIA!\n");
        return;
    }
    // Mostra o valor removido e avança o índice 'frente'
    printf("Removido %d\n", fila[frente++]);
    // (O valor removido continua no vetor, mas agora está “fora da fila” logicamente)
}

void imprimir()
{
    printf("FILA: ");
    for (int i = frente; i < tras; i++) // Percorre do início atual até o final (sem incluir o índice 'tras')
        printf("%d ", fila[i]);// Mostra os valores em ordem
    printf("\n ");
}

int main()
{
    int op; // Apenas inicializada, guarda a opção escolhida pelo usuário
    do
    {
        printf("\n1-Enfileirar 2-Retirar da fila ");
        scanf("%d", &op);

        if (op == 1)
        {
            enfileirar();
        }
        else if (op == 2)
        {
            retirarDaFila();
        }

        imprimir();

    } while (op != 0); // O programa só termina quando o usuário digita 0

    return 0;
}
