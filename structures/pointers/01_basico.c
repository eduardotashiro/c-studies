# include <stdio.h>

int main (){
    int var = 20; //vaariável normal
    int *ptr = &var; //ponteiro que armazena o endereço de var

    printf("Valor de var: %d\n", var);  //saída 20
    printf("Endereço de var: %p\n", (void*)&var); //endereço de var
    printf("Valor de ptr:%p\n", (void*)ptr); //endereço de var
    printf("Valor apontado por ptr: %d\n", *ptr); //saída 20

    //modificando o valor de var através do ponteiro

    *ptr = 30;

    printf("Novo valor de var: %d\n", var); //saída 30

    return 0;

}