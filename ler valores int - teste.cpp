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
	
	printf("Informe a opera��o desejada\n");
	printf("1 = Soma; 2 = Subtra��o; 3 = Multiplica��o; 4 = Divis�o;\n");
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
				printf("N�o � possivel realizar a divis�o\n");
				return 0;
		}
		
		printf("O resultado da opera��o � %.2f",r);
	} 
		else {
		printf("N�mero invalido, retorne e digite novamente um n�mero v�lido\n");
	}
	
	return 0;
}
