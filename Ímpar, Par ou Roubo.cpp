#include <stdio.h>
#include <locale.h> 

int main() {
   setlocale(LC_ALL,"Portuguese_Brazil");
   
   int p,j1,j2,r,a,duvida;
   
   printf("Programa para saber se houve roubo no Ímpar ou Par\n");
   printf("Jogador 1:\n0 - Ímpar\n1 - Par\n");
   scanf("%d",&p);
   printf("Número colocado pelo Jogador 1\n");
   scanf("%d",&j1);
   printf("Número colocado pelo Jogador 2\n");
   scanf("%d",&j2);
   printf("Jogador 1: Irá roubar para ganhar o jogo?\n1 - Sim\n0 - Não\n");
   scanf("%d",&r);
   printf("Jogador 2: Irá acusar o jogador 1 de roubo?\n1 - Sim\n0 - Não\n");
   scanf("%d",&a);
 
    if (p == 1) { //jogador escolheu par
      duvida = (j1 + j2) % 2;
      
      	if (duvida == 0 && r == 0) { //jogador não roubou
            if (a == 0) {
				printf("Jogador 1 ganha!\n");} //não foi acusado
			if (a == 1) {
				printf("Jogador 1 ganha!\n");} //foi acusado
      }
      
      	if (duvida != 0 && r == 1) { //jogador roubou
            if (a == 0) {
				printf("Jogador 1 ganha!\n");} //não foi acusado
			if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
      }
      
      if (duvida != 0 && r == 0) { //jogador não roubou
            if (a == 0) {
				printf("Jogador 2 ganha!\n");} //não foi acusado
			if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
      }
      
     	 if (duvida == 0 && r == 1) { //jogador roubou
            if (a == 0) {
				printf("Jogador 1 ganha!\n"); } //não foi acusado
			if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
	   	 }	
      } 
	  
	   if (!(p == 1)) { //jogador escolheu impar
        	duvida = (j1 + j2) % 2;
        
      		if (duvida >= 1 && r == 0) { //jogador não roubou
            	if (a == 0) {
				printf("Jogador 1 ganha!\n");} //não foi acusado
				if (a == 1) {
				printf("Jogador 1 ganha!\n");} //foi acusado
      			}
      		
      		if (duvida == 0 && r == 1) { //jogador não roubou
            	if (a == 0) {
				printf("Jogador 1 ganha!\n");} //não foi acusado
				if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
      			}
      			
      		if (duvida == 0 && r == 0) { //jogador roubou
            	if (a == 0) {
				printf("Jogador 2 ganha!\n");} //não foi acusado
				if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
     		 }	
      		
      		if (duvida >= 1 && r == 1) { //jogador não roubou
            	if (a == 0) {
				printf("Jogador 1 ganha!\n");} //não foi acusado
				if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
      			}
  		}	
      		
    return 0;
}
