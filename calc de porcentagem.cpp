#include <stdio.h> 
#include <locale.h> 

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int op;
	float a,b,r;
	
	printf("Calculadora de porcentagem\n");
	printf("Digite um valor\n");
	scanf("%f",&a);
	printf("Digite quantos porcento você quer descobrir\n");
	scanf("%f",&b);
	
	printf("Digite o que você quer fazer\n");
	printf("1 = Calcular percentual\n2 = Calcular valor incicial + percentual\n3 = Calcular valor inicial - percentual\n");
	scanf("%d",&op);
	
	if (op >= 1 && op <= 3) {
	
	if (op == 1) {
		r =(float) (b / 100) * a;
	} else if (op == 2) {
		r =(float) ((b / 100) * a) + a;
	} else {
		r =(float) a - ((b / 100) * a);
	}
	
	printf("Esse foi o resultado %.2f",r);
	}
	else {
		printf("Número errado, retorne e digite um aceitavel\n");
	}
	
	return 0;
}
