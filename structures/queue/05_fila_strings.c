#include <stdio.h> // Biblioteca padrão para input/output (printf, scanf, etc)
#include <string.h> // Biblioteca para manipulação de strings (strcpy, strlen, etc)

#define MAX 5  // Número máximo de posições da fila
#define TAM 40 // Tamanho máximo de cada string (nome)

char fila[MAX][TAM];
int frente = 0, tras = 0;

void enqueue(char *nome)
{
    if (tras >= MAX)
    {
        printf("FILA CHEIA!!\n");
    }
    strcpy(fila[tras++], nome); // copia a string para a posição atual e incrementa o índice
}

void dequeue(){
    if (frente == tras){
        printf("FILA VAZIA!!\n");
        return;
    }
    printf("Removido: %s\n", fila[frente++]); //mostra o removido e avança a fila
}

void imprimir(){
    for (int i = frente; i < tras; i++)
    {
        printf("[%s] ", fila[i]);
    }
    printf("\n");
}

int main(){
    enqueue("Fulano");
    enqueue("Ciclano");
    enqueue("Beltrano");
    imprimir();

    dequeue(); //remove fulano

    imprimir();

    enqueue("Fulaninho");
    imprimir();
    return 0;
}