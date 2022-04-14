#include<stdlib.h> 
#include<stdio.h>

int main(){
    int produto, op, cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0,cont7=0;
	float valor1 = 1139.90, valor2 = 1050.49 , valor3=849.90, valor4=135.99,  valor5=170, valor6=100, valor7=120, vf, produto1, produto2, produto3, produto4, produto5,produto6,produto7, pg= 0, troco;
    
printf("Aluno: Matheus Marinho Menezes, questão 4\n");
printf("\n--------------INSONIA ADEGA-----------------\n");
	
    do{
printf("\n-------------------------------------------------------");
	printf("\n1 - BLUE LABEL 750ml - R$1139,90");
    	printf("\n2 - ROYAL SALUTE 750ml - R$1050,49");
    	printf("\n3 - OLD PARR 1L - R$849,90");
    	printf("\n4 - TANQUERAY 750ml - R$135,99");
    	printf("\n5 - COPO STANLEY - R$170,00");
        printf("\n6 - COMBO BUDWEISER - R$100,00");
        printf("\n7 - COMBO HEINEKEN - R$120,00");
		printf("\n Qual produto deseja?: \n");
		 scanf("%d", &produto);
		switch(produto)
			{
			case 1:
			produto1+=valor1;
			printf("Deseja continuar escolhendo produtos? | 1 - Sim, 2 - Não | :");
			 scanf("%d", &op);
			cont1++;
			break;
			case 2:
			produto2+=valor2;
			printf("Deseja continuar escolhendo produtos? | 1 - Sim, 2 - Não | :");
			 scanf("%d", &op);
			cont2++;
			break;
			case 3:
			produto3+=valor3;
			printf("Deseja continuar escolhendo produtos? | 1 - Sim, 2 - Não | :");
			 scanf("%d", &op);
			cont3++;
			break;
			case 4:
			produto4+=valor4;
			printf("Deseja continuar escolhendo produtos? | 1 - Sim, 2 - Não | :");
			 scanf("%d", &op);
			cont4++;
			break;		
			case 5:
			produto5+=valor5;
			printf("Deseja continuar escolhendo produtos? | 1 - Sim, 2 - Não | :");
			 scanf("%d", &op);
			cont5++;
			break;
			case 6:
			produto6+=valor6;
			printf("Deseja continuar escolhendo produtos? | 1 - Sim, 2 - Não | :");
			 scanf("%d", &op);
			cont6++;
                         break;
                         case 7:
			produto7+=valor7;
			printf("Deseja continuar escolhendo produtos? | 1 - Sim, 2 - Não | :");
			 scanf("%d", &op);
			cont7++;
                         break;
                   
            default:
			printf("Opçao não existente. Digite 1 para voltar!\n");
			scanf("%d", &op);
			break;
			 }
	}while(op==1);
		
		vf=produto1+produto2+produto3+produto4+produto5+produto6+produto7;
printf("\n-------------------------------------------------------");		
        printf("\nPRODUTOS ESCOLHIDOS\n");
		if(produto1 > 1){
		printf("\nBLUE LABEL 750ml - R$1139,90");
		printf("\nQuantidade: %d", cont1);
		}
		if(produto2 > 1){
		printf("\nROYAL SALUTE 750ml - R$1050,49");
		printf("\nQuantidade: %d", cont2);		
		}
		if(produto3 > 1){
		printf("\nOLD PARR 1L - R$849,90");
		printf("\nQuantidade: %d", cont3);	
		}
		if(produto4 > 1){
		printf("\nTANQUERAY 750ml - R$120,00");
		printf("\nQuantidade: %d", cont4);
		}
		if(produto5 > 1){
		printf("\nCOPO STANLEY - R$170,00");
		printf("\nQuantidade: %d", cont5);	
		}
                if(produto6 > 1){
		printf("\nCOMBO BUDWEISER - R$100,00");
		printf("\nQuantidade: %d", cont6);	
		}
                if(produto7> 1){
		printf("\nCOMBO HEINEKEN - R$120,00");
		printf("\nQuantidade: %d", cont7);	
		}
		printf("\n\nValor total da compra: R$%.2f", vf);	
		printf("\n\nQual o valor em dinheiro que você irá pagar?: ");
		 scanf("%f", &pg);
		if(pg<vf)
		printf("\nValor insuficiente para a compra! refaça a compra e  tente novamente.");
		else{
		troco = pg - vf;
		printf("\nPagamento realizado! Troco: R$%.2f \n", troco);
		}
                printf("\n¥ VOLTE SEMPRE A INSONIA ¥ \n");
		return 0;
}
