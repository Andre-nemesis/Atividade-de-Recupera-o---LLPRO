#include <stdio.h>
#include <locale.h>
int main() {
 setlocale(LC_ALL,"Portuguese_Brazil");
   int HoraI,HoraF,Tempo;
   
   printf("Calculadora de Tempo de Jogo!\n");
   
   pritnf("Digite aqui a Hora em que o jogo começou\n");
   scanf("%d",&HoraI);
   printf("Digite aqui a Hora em que o jogo terminou\n");
   scanf("%d",&HoraF);
   
   if (HoraI < HoraF) {
    Tempo = HoraF - HoraI;
    printf("O JOGO DUROU %.d HORA(S)\n",Tempo);  
   }
   
   else {
       Tempo = (24 - HoraI) + HoraF;
       printf("O JOGO DUROU %.d HORA(S)\n",Tempo);
   }
    return 0;
}
