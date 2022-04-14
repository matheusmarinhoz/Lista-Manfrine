#include<stdlib.h>
#include<stdio.h>

main(){
    
int cont1=0,cont2=0,num,soma;
 
 do{    
 printf("DIGITE UM NUMERO: ");
scanf("%d",&num);
cont1++;
if(num>5){
cont2++;

 }
 }
while(cont1<10);
printf("quantidade de numeros digitados maiores que 5 foi: %d",cont2);


return 0;
system("pause");
}

