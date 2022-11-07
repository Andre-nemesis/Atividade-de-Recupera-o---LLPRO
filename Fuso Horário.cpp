#include <stdio.h>
#include <locale.h> 

int main() {
   setlocale(LC_ALL,"Portuguese_Brazil");
   int S,T,F,H;
   
   printf("Calculadora de Fuso Horario\n");
   printf("Digite aqui o Horário de Saída\n");
   scanf("%d",&S);
   printf("Digite aqui o Tempo de Viagem\n");
   scanf("%d",&T);
   printf("Digite aqui o Fuso Horário do Lugar\n");
   scanf("%d",&F);

   H = S + T + F;
   
   if (H == 24 || H == 0) {
   		printf("0H\n");} 
   		
	   		else if (H > 24) {
   			H = H - 24;
   			printf("%dH\n",H); } 
   		
    		else if (H > 0 && H <= 23) {
   			printf("%dH\n",H);}
   			
      		else if (H < 0) {
   				H = H + 24;
   				printf("%dH\n",H);}
   		   		
 
    return 0;
}
