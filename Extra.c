Esse desafio é extra; não realizar ele não impede de conseguir todos os pontos do trabalho. 
Construa um algoritmo em C que implemente o sistema de avaliação da UCB. 
  
  O programa irá receber as três notas principais (N1, N2 e PPD), valide se: 

• N1 = [0; 4,5] 
• N2 = [0; 4,5] 
• PPD = [0; 1]

Caso algum não esteja com valor válido, retorne código de erro 3. 
Em seguida, receba uma flag que determinará se o estudante realizou o Exame Unificado (EU), 0 para não e 1 para sim. 
Caso tenha feito, receba a nota do exame unificado; lembre-se de validar se EU = [0; 1]. 
Também receba uma flag que defina se o estudante realizou a N3, 0 para não e 1 para sim. 
Caso tenha realizado, leia a N3 e também verifique se ela está no intervalo permitido, N3 = [0; 4,5], e substitua a menor nota na composição da nota final. 
  
Lembre-se de que a nota final deve estar no intervalo [0; 10]. Apresente a nota final e se o estudante foi aprovado ou reprovado.
