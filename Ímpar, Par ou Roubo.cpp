#include <stdio.h>
#include <locale.h> 

int main() {
   setlocale(LC_ALL,"Portuguese_Brazil");
   
   int p,j1,j2,r,a,duvida;
   
   printf("Programa para saber se houve roubo no �mpar ou Par\n");
   printf("Jogador 1:\n0 - �mpar\n1 - Par\n");
   scanf("%d",&p);
   printf("N�mero colocado pelo Jogador 1\n");
   scanf("%d",&j1);
   printf("N�mero colocado pelo Jogador 2\n");
   scanf("%d",&j2);
   printf("Jogador 1: Ir� roubar para ganhar o jogo?\n1 - Sim\n0 - N�o\n");
   scanf("%d",&r);
   printf("Jogador 2: Ir� acusar o jogador 1 de roubo?\n1 - Sim\n0 - N�o\n");
   scanf("%d",&a);
 
    if (p == 1) { //jogador escolheu par
      duvida = (j1 + j2) % 2;
      
      	if (duvida == 0 && r == 0) { //jogador n�o roubou
            if (a == 0) {
				printf("Jogador 1 ganha!\n");} //n�o foi acusado
			if (a == 1) {
				printf("Jogador 1 ganha!\n");} //foi acusado
      }
      
      	if (duvida != 0 && r == 1) { //jogador roubou
            if (a == 0) {
				printf("Jogador 1 ganha!\n");} //n�o foi acusado
			if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
      }
      
      if (duvida != 0 && r == 0) { //jogador n�o roubou
            if (a == 0) {
				printf("Jogador 2 ganha!\n");} //n�o foi acusado
			if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
      }
      
     	 if (duvida == 0 && r == 1) { //jogador roubou
            if (a == 0) {
				printf("Jogador 1 ganha!\n"); } //n�o foi acusado
			if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
	   	 }	
      } 
	  
	   if (!(p == 1)) { //jogador escolheu impar
        	duvida = (j1 + j2) % 2;
        
      		if (duvida >= 1 && r == 0) { //jogador n�o roubou
            	if (a == 0) {
				printf("Jogador 1 ganha!\n");} //n�o foi acusado
				if (a == 1) {
				printf("Jogador 1 ganha!\n");} //foi acusado
      			}
      		
      		if (duvida == 0 && r == 1) { //jogador n�o roubou
            	if (a == 0) {
				printf("Jogador 1 ganha!\n");} //n�o foi acusado
				if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
      			}
      			
      		if (duvida == 0 && r == 0) { //jogador roubou
            	if (a == 0) {
				printf("Jogador 2 ganha!\n");} //n�o foi acusado
				if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
     		 }	
      		
      		if (duvida >= 1 && r == 1) { //jogador n�o roubou
            	if (a == 0) {
				printf("Jogador 1 ganha!\n");} //n�o foi acusado
				if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
      			}
  		}	
      		
    return 0;
}
