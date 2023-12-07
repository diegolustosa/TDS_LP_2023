#include <stdio.h>


    int main() {
      int vetor[10];
      int valorResultado = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite o valor da posicao do numero");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0) {
            printf("Seu resultado e' par");
            
        }
    }
    else if(vetor[i] % 2 != 0) {
        printf("Seu resultado e' impar");
    }

    
    return 0;
    }