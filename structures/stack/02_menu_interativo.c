#include <stdio.h>
#define MAX 5

int pilha[MAX];
int topo = 0;

void push()
{
    if (topo >= MAX)
    {
        printf("PILHA CHEIA!\n");
        return;
    }
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    pilha[topo++] = valor;
}

void pop()
{
    if (topo == 0)
    {
        printf("PILHA VAZIA!\n");
        return;
    }
    printf("Removido: %d\n", pilha[--topo]);
}

void imprimir()
{
    
    for (int i = 0; i < topo; i++)
        printf("%d", pilha[i]);
    printf("\n");
}

int main()
{
    int op;
    do
    {
        printf("\n1-Push 2-Pop 0-Sair: "), scanf("%d", &op);
        if (op == 1)
            push();
        else if (op == 2)
            pop();
        imprimir();
    } while (op != 0);
    return 0;
}