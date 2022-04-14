#include<stdlib.h>
#include<stdio.h>

main(){
    
int i=0,soma=0;

for(i = 15 ; i <=250 ;i++){
    
if((i % 2!=0 ) && (i % 3 ==0)){
printf("%d \n",i);
soma+=i;
}    
    
}

printf("a soma é: %d",soma);

return 0;
}

