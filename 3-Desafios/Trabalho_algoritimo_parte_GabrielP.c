#include <stdio.h>
#include <string.h>

int main() {
    int quant_cadeias;
    int variavel_B;
 
    do{
    	printf("Qual a quantidade de cadeias? ");
    	scanf("%d", &quant_cadeias);
    	
		if(quant_cadeias < 1 || quant_cadeias > 1000){
			printf("\nValor inválido, digite um valor de 1 a 1000.\n");	
		}			
	}while(quant_cadeias < 1 || quant_cadeias > 1000);
	
	 do{
    	printf("\nQual o valor da variavel B? ");
    	scanf("%d", &variavel_B);
    	
		if(variavel_B < -100 || variavel_B > 100) {
			printf("\nValor inválido, digite um valor de -100 a 100.\n");	
		}			
	}while(variavel_B < -100 || variavel_B > 100);
    

    char string[101];
    printf("\nDigite a mensagem codificada: ");
    scanf("%s", string);

    int comprimento = strlen(string);

    printf("\nDuplas de caracteres:\n");
    int i;
    for (i = 0; i < comprimento; i += 2) {
        if (i + 1 < comprimento) {
            printf("%c%c\n", string[i], string[i + 1]);
        }
    }

    return 0;
}


