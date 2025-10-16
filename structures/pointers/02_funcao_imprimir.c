#include <stdio.h>
#include <stdlib.h>

int xi;      // variável global inteira
int *ptr_xi; // ponteiro global para inteiro

// função que imprime valores de endereços

void imprimir()
{
    printf("valor de xi = %d\n", xi);             // valor da variável xi
    printf("valor de &xi = %p\n", &xi);           // endereço de xi
    printf("valor de ptr_xi = %p\n", ptr_xi);     // valor do ponteiro (deve ser &xi)
    printf("valor de *ptr_xi = %d\n\n", *ptr_xi); // valor no endereço apontado pelo ponteiro
}

int main()
{
    xi = 10;      // atribui valor 10 a xi
    ptr_xi = &xi; // ponteiro aponta para o endereço de xi

    imprimir();   // mostra os valores atuais
    xi = 20;      // altera xi diretamente
    imprimir();   // mostra que *ptr_xi também muda
    *ptr_xi = 30; // altera xi através do ponteiro
    imprimir();   // confirma que xi agora é 30

    return 0;
}


/*
*
*
*

valor de xi = 10
valor de &xi = 0x5b5a40511018
valor de ptr_xi = 0x5b5a40511018
valor de *ptr_xi = 10

valor de xi = 20
valor de &xi = 0x5b5a40511018
valor de ptr_xi = 0x5b5a40511018
valor de *ptr_xi = 20

valor de xi = 30
valor de &xi = 0x5b5a40511018
valor de ptr_xi = 0x5b5a40511018
valor de *ptr_xi = 30

*
*
*
*/