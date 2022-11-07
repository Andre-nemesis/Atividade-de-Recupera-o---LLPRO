#include <stdio.h>
#include <locale.h>  
 int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");     
	double v1, v2, v3, A, B, C;
	
	printf("Programa para saber se Forma Triângulo ou Não\n");
	printf("Digite 3 valores para o seu Triângulo\n");
	scanf("%lf %lf %lf", &v1,&v2,&v3);

	if (v1 >= v2 && v1 >= v3) {
		A = v1;
		B = v2;
		C = v3;	
	}
	
	if (v2 >= v1 && v2 >= v3) {
		A = v2;
		B = v1;
		C = v3;	
	}
	
	if (v3 >= v2 && v3 >= v1) {
		A = v3;
		B = v2;
		C = v1;	
	}
	
    if (A >= B + C ) {
    	printf("NÃO FORMA TRIÂNGULO\n"); }
	
	else {
	    
    	if ((A * A) == (B * B) + (C * C)) {
    	    printf("TRIÂNGULO RETÂNGULO\n"); }
    	
    	if ((A * A) > (B * B) + (C * C)) {
    	    printf("TRIÂNGULO OBTUSÂNGULO\n"); }
    	
    	if ((A * A) < (B * B) + (C * C)) {
    	    printf("TRIÂNGULO ACUTÂNGULO\n"); }
    	
    	if ((A == B) && (B == C) && (C == A)) {
    	    printf("TRIÂNGULO EQUILATERO\n"); }
    	
    	if ((A == B && A != C) || (B == C && B != A) || (C == A && C !=B )) {
    	    printf("TRIÂNGULO ISOSCELES\n"); }
	}
    return 0;
}
