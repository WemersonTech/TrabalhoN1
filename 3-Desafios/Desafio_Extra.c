#include <stdio.h>
#include <locale.h> 

int main() {

setlocale(LC_ALL, "Portuguese");
     
    float N1, N2, PPD, N3 = 0.0, EU = 0.0, nota_final;
    int fezEU, fezN3;
    
    printf("Digite a nota N1 (entre 0 e 4.5): ");
    scanf("%f", &N1);

    if (N1 < 0 || N1 > 4.5) {
        printf("Erro: N1 invalida digite entre 0 e 4.5 \n");
        return 3;
    }
    printf("Digite a nota N2 (entre 0 e 4.5): ");
    scanf("%f", &N2);

    if (N2 < 0 || N2 > 4.5) {
        printf("Erro: N2 invalida digite entre 0 e 4.5\n");
        return 3;
    }
    printf("Digite a nota PPD (entre 0 e 1): ");
    scanf("%f", &PPD);

    if (PPD < 0 || PPD > 1) {
        printf("Erro: PPD invalida digite entre 0 e 1\n");
        return 3;
    }

    printf("O aluno fez o Exame Unificado? (0 = nao, 1 = sim): ");
    scanf("%d", &fezEU);

    if (fezEU != 0 && fezEU != 1) {
        printf("Erro:EU invalida\n");
        return 3;
    }
    if (fezEU == 1) {
        printf("Digite a nota do Exame Unificado (entre 0 e 1): ");
        scanf("%f", &EU);
        if (EU < 0 || EU > 1) {
            printf("Erro: Nota do Exame Unificado invalida digite entre 0 e 1\n");
            return 3;
        }
    }
    
    if(N1+N2+PPD+EU < 7){
    	printf("O aluno fez a N3? (0 = nao, 1 = sim): ");
    scanf("%d", &fezN3);

	    if (fezN3 != 0 && fezN3 != 1) {
	        printf("Erro:N3 invalida\n");
	        return 3;
	    }
	
	    if (fezN3 == 1) {
	        printf("Digite a nota N3 (entre 0 e 4.5): ");
	        scanf("%f", &N3);
	        if (N3 < 0 || N3 > 4.5) {
	            printf("Erro:Nota N3 invalida digite entre 0 e 4.5\n");
	            return 3;
	        }
	        
	        if (N1 < N2) {
	            N1 = N3;
	        } else {
	            N2 = N3;
	        }
	    }
    }
    
    
    nota_final = N1 + N2 + PPD + EU;

    if (nota_final > 10) {
        nota_final = 10;
    } else if (nota_final < 0) {
        nota_final = 0;
    }
	
	printf("\n+-----------------------+----------------+\n");
    printf("|               RESULTADO                |\n");
    printf("+--------------------+-------------------+\n");
    printf("|        Notas       |   Nota Final      |\n");
    printf("+--------------------+-------------------+\n");
    printf("|N1  = %.2f          |                   |\n", N1);
    printf("|N2  = %.2f          |                   |\n", N2);
    printf("|PPD = %.2f          |      %.2f         |\n", PPD, nota_final);
    if (nota_final >= 7) {
        printf("|EU  = %.2f          |    Aprovado! :)   |\n", EU);
    } else {
        printf("|EU  = %.2f          |    Reprovado :(   |\n", EU);
    }
    printf("|N3  = %.2f          |                   |\n", N3);  
    printf("+--------------------+-------------------+\n");



    return 0;
}
