#include <stdlib.h>
#include <string.h>
#include <stdio.h>

main() {
int idade;
char sexo, nome[30];

printf("Informe seu nome: \n"); 
scanf("%s", &nome);
printf("Informe seu sexo [f] ou [F]: \n");
scanf("%s",&sexo);
printf("Informe sua idade: \n");
scanf("%d",&idade);

if (sexo == 'f' || sexo == 'F' && idade < 25)
printf("\n%s ACEITA \n\n", nome);

else
printf("\nNAO ACEITA.\n\n");

system("PAUSE");
return 0;

}
