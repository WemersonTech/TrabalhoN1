#include "funcoes.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    int quant_cadeias;
    int i, j;
    char tempStr[2], mensagemDec[50002] = "";
    char parar[] = "00\0";
    
    
    scanf("%d", &quant_cadeias);
    if (quant_cadeias < 1 || quant_cadeias > 1000) {
        return 0; 
    }
    
    // Definira quantas vezes a varivel B e a cadeia de strings se repetirá
    for (i = 1; i <= quant_cadeias; i++) {
        
        int variavel_B;
        scanf("%d", &variavel_B);
        
        if (variavel_B < -100 || variavel_B > 100) {
            return 0; 
        }
        
        getchar(); // Receber o /n, quanto apertado a tecla enter

        char mensagemCod[102];
        fgets(mensagemCod, 102, stdin);
		
		// Limitando a quantidade de caracteres para o maximo permitido
        if (mensagemCod[strlen(mensagemCod) - 1] != '\n') {
            return 0; 
        }
        mensagemCod[strlen(mensagemCod) - 1] = '\0';

        
        strcat(mensagemDec, "\n"); // Pula uma linha para cada mensagem traduzida.
        
        int comprimento = strlen(mensagemCod);
        char duplaHex[3] = "11\0"; 
        int x = 0; 
        
        // Loop para processar a mensagem codificada em pares de caracteres
        for (j = 0; j < comprimento; j += 2) {
            if (j + 1 < comprimento && strcmp(duplaHex, parar) != 0) {
                
                duplaHex[0] = mensagemCod[j];
                duplaHex[1] = mensagemCod[j + 1];
                duplaHex[2] = '\0';
                x++;
                
                int dec;
                // verifica se o caracter deve ser traduzido
                if (func_val(x, variavel_B) == 1) {
                    dec = (int)strtol(duplaHex, NULL, 16);
                    tempStr[0] = (char)dec;
                    tempStr[1] = '\0';
                    strcat(mensagemDec, tempStr); // concatena cada caracter da mensagem traduzida.
                }
            }
        }
    }
    
    printf("%s", mensagemDec);
    
    return 0; 
}

