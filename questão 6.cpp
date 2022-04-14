#include<stdlib.h>
#include<stdio.h>

main(){


int numero =0;
int qtd1 = 0;
int qtd2 = 0;
int qtd3 = 0;
int qtd4 = 0;
int quantidadeForaDoIntervalo = 0;
 
        while (numero>=0){
            printf("Informe um numero: ");
            scanf("%d",&numero);
 
            if ((numero >= 0) && (numero > 100)){
    quantidadeForaDoIntervalo = quantidadeForaDoIntervalo + 1;
            } else {
                if ((numero >= 0) && (numero <= 25)) {
                    qtd1 = qtd1 + 1;
                }
 
                if ((numero >= 26) && (numero <= 50)) {
                    qtd2 = qtd2 + 1;
                }
 
                if ((numero >= 51) && (numero <= 75)){
                    qtd3 = qtd3 + 1;
                }
 
                if ((numero >= 76) && (numero <= 100)){
                    qtd4 = qtd4 + 1;
                }
            }
 
        }
 
 printf("Quantidade de números no intervalo de 0 a 25, é de %d\n",qtd1);
  printf("Quantidade de números no intervalo de 25 a 50, é de %d\n",qtd2);
  printf("Quantidade de números no intervalo de 50 a 75, é de %d\n",qtd3);
  printf("Quantidade de números no intervalo de 75 a 100, é de %d\n",qtd4);
printf("Quantidade de números fora do intervalo, é de %d\n", quantidadeForaDoIntervalo);
 
 system("pause");
 return 0;
}
