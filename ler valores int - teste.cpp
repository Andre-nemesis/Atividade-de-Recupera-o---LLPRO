#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int V1,V2,op;
	float r;
	
	//programa para ler dois valores
	
	printf("Digite aqui um valor\n");
	scanf("%d",&V1);
	printf("Agora digite um outro valor\n");
	scanf("%d",&V2);
	
	printf("Informe a operação desejada\n");
	printf("1 = Soma; 2 = Subtração; 3 = Multiplicação; 4 = Divisão;\n");
	scanf("%d",&op);
	
	if (op >= 1 && op <= 4) {
		
		if (op == 1) {
			r = V1 + V2;
		} 
		else if (op == 2) {
				r = V1 - V2;
		} 
		else if (op == 3) {
				r = V1 * V2;
		} 
		else if (op == 4 && V2 > 0 || V2 < 0) {
				r =(float) V1 / V2;
		} else  {
				printf("Não é possivel realizar a divisão\n");
				return 0;
		}
		
		printf("O resultado da operação é %.2f",r);
	} 
		else {
		printf("Número invalido, retorne e digite novamente um número válido\n");
	}
	
	return 0;
}
