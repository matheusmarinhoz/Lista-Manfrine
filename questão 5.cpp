//fiz automatizado
#include<stdlib.h>
#include<stdio.h>

main(){
    
int m, sub,resultado;
int a  , b ;

printf("quantos metros a aranha precisa para chegar ao topo?: ");
scanf("%d",&m);
printf("quantos cm a aranha sobe durante o dia: ");
scanf("%d",&a);
printf("quantos cm a aranha desce durante a noite: ");
scanf("%d",&b);

sub=a-b;
resultado=(m*100)/sub;

printf("total de dias ate chegar ao topo foi de : %d", resultado);
    
return 0;
}
