Análise dos limites suportados pelos tipos de arquivos

Uma causa importante de erros em programação em C é ultrapassar os limites numéricos estabelecidos para cada tipo de variável.
O objetivo desse exercício é mostrar como e porque ocorrem esses erros. 
Os limites numéricos que cada tipo inteiro estão definidos na biblioteca da linguagem LIMITS.H, na forma de constantes. 
Escreva um programa que use essa biblioteca e imprima os limites mínimos e máximos que podem ser assumidos por 
variáveis dos tipos char, int, short int, unsigned int, long int, unsigned long int, long long int, unsigned long long int. 
Apresente os resultados em uma tabela. Faça um pequeno programa, usando uma variável à qual é atribuída um valor maior do que seu tipo permite,
para demonstrar o problema que pode ocorrer. Explique o que acontece se você utilizar um valor fora dos limites dos tipos de variáveis.
