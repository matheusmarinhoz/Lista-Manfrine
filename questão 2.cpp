#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

main(){
char estado[2];

printf("Informe a sigla de um estado: ");
scanf("%s", &estado);

if(!strcmp(estado,"RJ") || !strcmp(estado,"rj"))
printf("Carioca\n");

else if(!strcmp(estado,"SP") || !strcmp(estado,"sp"))
printf("Paulista\n");

else if(!strcmp(estado,"AM") || !strcmp(estado,"am"))
printf("Amazonense\n");

else
printf("Outros estados\n\n");


system("pause");
return 0;

}
