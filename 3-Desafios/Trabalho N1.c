#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int ui;
    short int si;

    // Solicitar ao usu�rio para fornecer um valor inicial para unsigned int
    printf("Insira um valor para 'unsigned int' (sugestao: pr�ximo a %u para ver overflow): ", UINT_MAX);
    scanf("%u", &ui);
    printf("Valor inicial de unsigned int: %u\n", ui);
    // Incrementa ui al�m do seu limite m�ximo, provocando um overflow
    
    ui++;
    printf("Valor apos incremento alem do limite (overflow): %u\n", ui);

    // Solicitar ao usu�rio para fornecer um valor inicial para short int
    printf("\nInsira um valor para 'short int' (sugestao: proximo a %d para ver underflow): ", SHRT_MIN);
    scanf("%hd", &si);
    printf("Valor inicial de short int: %d\n", si);
    // Decrementa si al�m do seu limite m�nimo, provocando um underflow

    si--;
    printf("Valor apos decremento alem do limite (underflow): %d\n", si);

    return 0;
}
