#include <stdio.h>
#include<stdlib.h>
main() {
 
  float altura, imc;
  int peso;
  printf("Aluno: Matheus Marinho Menezes, questão 1\n\n");

  printf("Informe o peso: \n");
  scanf("%d", &peso);

  printf("\nInforme a altura (EX: 1.75):\n");
  scanf("%f", &altura);

  imc = peso / (altura * altura);


  printf("\nIMC = %.2f", imc);
  if (imc < 18.5)
     printf(" (abaixo do peso).");
  else if ((imc >= 18.5) && (imc < 25))
          printf(" (peso normal).");
       else if ((imc >= 25) && (imc < 30))
               printf(" (acima do peso).");
            else if ((imc >= 30) && (imc < 34))
                    printf(" (obeso).");
		 else
		    printf(" (muito obeso).");

return 0;
}

