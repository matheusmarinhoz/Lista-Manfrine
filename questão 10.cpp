#include<stdio.h>
#include<stdlib.h>

// Funcoes sao procedimentos que retornam um unico valor ao final da sua execucao
// É quase igual a uma função, mas não precisa necessariamente ter retorno algum

float ma(float x,float y,float z){
return (x+y+z)/3; 
}
void media_aritmetica(float x,float y,float z){
printf("Resultado da media aritmetica eh: %.2f",ma(x,y,z));
}
float mp(float a,float b,float c){
return (a*5+b*3+c*2)/10;
}
void media_ponderada(float a,float b,float c){
printf("Resultado da media ponderada eh: %.2f",mp(a,b,c));
}
int main()
{
float n1,n2,n3;
int escolha;

printf("ALUNO: MATHEUS MARINHO MENEZES - QUESTAO 10\n\n");

printf("Digite as 3 notas do aluno:\n");
scanf("%f%f%f",&n1,&n2,&n3);
printf("Digite : \n 1 - media aritmetica \n 2 - media ponderada:\n");
scanf("%d",&escolha);
if(escolha==1)
{
ma(n1,n2,n3);
media_aritmetica(n1,n2,n3);

}
if(escolha==2)
{
mp(n1,n2,n3);
media_ponderada(n1,n2,n3);
}
return 0;
}
