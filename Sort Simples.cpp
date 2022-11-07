#include <stdio.h>
#include <locale.h> 
int main() {
 setlocale(LC_ALL,"Portuguese_Brazil");
 
    int A,B,C;
 	
	printf("Organizador de números, em ordem Crescente e  ordem que foi digitada\n");
	printf("Digite aqui 3 números\n");
    scanf("%d %d %d",&A,&B,&C);
    
    
    
    if(A < B && A < C && B > C) {
    	
        printf("Ordem Crescente\n%d\n%d\n%d\n\nOrdem Digitada\n%d\n%d\n%d\n",A,C,B,A,B,C);
    }
    
    if(A < C && A < B && C > B) {
        printf("Ordem Crescente\n%d\n%d\n%d\n\nOrdem Digitada\n%d\n%d\n%d\n",A,B,C,A,B,C);
    }
    
    if (B < A && B < C && A > C) {
        printf("Ordem Crescente\n%d\n%d\n%d\n\nOrdem Digitada\n%d\n%d\n%d\n",B,C,A,A,B,C);
    }
    
     if (B < C && B < A && C > A) {
        printf("Ordem Crescente\n%d\n%d\n%d\n\nOrdem Digitada\n%d\n%d\n%d\n",B,A,C,A,B,C);
    }
    
    if (C < A && C < B && B > A) {
        printf("Ordem Crescente\n%d\n%d\n%d\n\nOrdem Digitada\n%d\n%d\n%d\n",C,A,B,A,B,C);
    }
    
     if (C < B && C < A && A > B) {
    }
 
    return 0;
}
