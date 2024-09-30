
//AnÃ¡lise dos limites suportados pelos tipos de arquivos


#include <stdio.h>
#include <limits.h> 
#include <locale.h> 

int main() {

	setlocale(LC_ALL, "Portuguese");
     

    printf("\tSegue abaixo, tabela de capacidades por cada tipo de variavel :\n");
    printf("+-------------------------+--------+---------------------------+---------------------------+\n");
    printf("| Tipo                    | Bytes: |      Valor Min.:          |      Valor Max.:          |\n");
    printf("+-------------------------+--------+---------------------------+---------------------------+\n");
    printf("| char                    |   1    |%d                       | %d                       |\n", CHAR_MIN, CHAR_MAX);
    printf("| unsigned char           |   1    |0                          | %u                       |\n", UCHAR_MAX);
    printf("| short int               |   2    |%d                     | %d                     |\n", SHRT_MIN, SHRT_MAX);
    printf("| unsigned short int      |   2    |0                          | %u                     |\n", USHRT_MAX);
    printf("| int                     |   4    |%d                | %d                |\n", INT_MIN, INT_MAX);
    printf("| unsigned int            |   4    |0                          | %u                |\n", UINT_MAX);
    printf("| long int                | 4 ou 8 |%ld                | %ld                |\n", LONG_MIN, LONG_MAX);
    printf("| unsigned long int       | 4 ou 8 |0                          | %lu                |\n", ULONG_MAX);
    printf("| long long int           |   8    |%lld       | %lld       |\n", LLONG_MIN, LLONG_MAX);
    printf("| unsigned long long int  |   8    |0                          | %llu      |\n", ULLONG_MAX);
    printf("+-------------------------+--------+---------------------------+---------------------------+\n");
    
    
	printf("\nObs.: \nlong int = 4 bytes (32 bits) ou 8 bytes (64 bits);\nunsigned long int = 4 bytes (32 bits) ou 8 bytes (64 bits)\n");
	
	
    unsigned int ui;
    short int si;

    // Solicitar ao usuário para fornecer um valor inicial para unsigned int
    printf("\nInsira um valor para 'unsigned int' (sugestao: próximo a %u para ver overflow): ", UINT_MAX);
    scanf("%u", &ui);
    printf("Valor inicial de unsigned int: %u\n", ui);
    // Incrementa ui além do seu limite máximo, provocando um overflow
    
    ui++;
    printf("Valor apos incremento alem do limite (overflow): %u\n", ui);

    // Solicitar ao usuário para fornecer um valor inicial para short int
    printf("\nInsira um valor para 'short int' (sugestao: proximo a %d para ver underflow): ", SHRT_MIN);
    scanf("%hd", &si);
    printf("Valor inicial de short int: %d\n", si);
    // Decrementa si além do seu limite mínimo, provocando um underflow

    si--;
    printf("Valor apos decremento alem do limite (underflow): %d\n", si);
    


    return 0;
}
   
