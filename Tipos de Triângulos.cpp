#include <stdio.h>
#include <locale.h>  
 int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");     
	double v1, v2, v3, A, B, C;
	
	printf("Programa para saber se Forma Tri�ngulo ou N�o\n");
	printf("Digite 3 valores para o seu Tri�ngulo\n");
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
    	printf("N�O FORMA TRI�NGULO\n"); }
	
	else {
	    
    	if ((A * A) == (B * B) + (C * C)) {
    	    printf("TRI�NGULO RET�NGULO\n"); }
    	
    	if ((A * A) > (B * B) + (C * C)) {
    	    printf("TRI�NGULO OBTUS�NGULO\n"); }
    	
    	if ((A * A) < (B * B) + (C * C)) {
    	    printf("TRI�NGULO ACUT�NGULO\n"); }
    	
    	if ((A == B) && (B == C) && (C == A)) {
    	    printf("TRI�NGULO EQUILATERO\n"); }
    	
    	if ((A == B && A != C) || (B == C && B != A) || (C == A && C !=B )) {
    	    printf("TRI�NGULO ISOSCELES\n"); }
	}
    return 0;
}
