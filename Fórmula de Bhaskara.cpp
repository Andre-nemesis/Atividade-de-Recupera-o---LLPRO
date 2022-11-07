#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A,B,C,R1,R2,delta;
    
    printf("Calculadora da Formula de Bhaskara\n");
    printf("Digite em baixo 3 valores\n");
    printf("Valor de A\n");
    scanf("%lf",&A);
    printf("Valor de B\n");
    scanf("%lf",&B);
    printf("Valor de B\n");
    scanf("%lf",&C);
    
    delta = (B * B) - (4 * A * C) ;
    R1 = (-B + sqrt(delta)) / (2 * A) ;
    R2 = (-B - sqrt(delta)) / (2 * A) ;
    
    if(A != 0 && delta > -1){
        printf("Raiz 1 = %.5lf\nRaiz 2 = %.5lf\n",R1, R2);
    }
    else{
        printf("Impossivel calcular\n");
    }
 
    return 0;
}
