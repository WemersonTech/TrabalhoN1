
//Análise dos limites suportados pelos tipos de arquivos


#include <stdio.h>
#include <limits.h> 
#include <locale.h> 

int main() {

setlocale(LC_ALL, "Portuguese");
     

    printf("\tSegue abaixo, tabela de capacidades por cada tipo de variável :\n");
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
    


    return 0;
}
   
