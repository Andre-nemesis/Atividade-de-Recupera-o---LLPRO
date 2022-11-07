#include <stdio.h>
#include <locale.h> 
int main() {
  setlocale(LC_ALL,"Portuguese_Brazil");
  
  float N1,N2,N3,N4,N5,Media,MediaFinal;
  
  	printf("Calculadora de Médias\n");
  	
  	printf("Digite aqui a sua primeira nota\n");
    scanf("%f",&N1);
    printf("Digite aqui a sua segunda nota\n");
    scanf("%f",&N2);
    printf("Digite aqui a sua terceira nota\n");
    scanf("%f",&N3);
    printf("Digite aqui a sua quarta nota\n");
    scanf("%f",&N4);
    
    Media = (N1*2+N2*3+N3*4+N4*1)/10;
    
    if(Media >= 7) {
        printf("Média: %.1f\nAluno aprovado.\n",Media);
    }
    
	if (Media < 5) {
        printf("Media: %.1f\nAluno reprovado.\n",Media);
    }
    
    if(Media >= 5 && Media < 7) {
    	printf("Aluno em Recuperação\n");
    	printf("Digite aqui a nota da recuperação\n");
        scanf("%f",&N5);
        printf("Media: %.1f\n",Media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n",N5);
        MediaFinal = (N5+Media)/2;
        
        if(MediaFinal >= 5) {
            printf("Aluno aprovado.\n");
        }
        
        else {
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1f\n",MediaFinal);
    }
    
    return 0;
}

