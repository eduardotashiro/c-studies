#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr; // cria um ponteiro para inteiro

    printf("endereço inicial: %p\n\n", ptr); // endereço da variavel declarada (não inicializada)

    ptr = (int *)malloc(sizeof(int));                                 // aloca memória dinâmica para 1 inteiro
    printf("endereço alocado: %p\nValor inicial: %d\n\n", ptr, *ptr); // *ptr pode conter lixo, pois a memória não foi inicializada

    *ptr = 10; // Atribui valor 10 ao espaço alocado
    printf("endereco: %p\nValor: %d\n\n", ptr, *ptr);

    int x = 20;
    ptr = &x; // agora o ponteiro aponta para a variavel X
    printf("endereço de x: %p\nValor via ponteiro: %d\n\n", ptr, *ptr);

    ptr = (int *)malloc(sizeof(int)); // novo malloc
    printf("novo endereco: %p\nValor: %d\n\n", ptr, *ptr);

    free(ptr);  //libera memória alocada dinamicamente 

    return 0;
}


/*
*
*
*
endereço inicial: 0x7ffc52a5d460

endereço alocado: 0x58fabf9896b0
Valor inicial: 0

endereco: 0x58fabf9896b0
Valor: 10

endereço de x: 0x7ffc52a5d36c
Valor via ponteiro: 20

novo endereco: 0x58fabf9896d0
Valor: 0
*
*
*
*/