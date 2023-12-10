#include <stdio.h>

    int main(){
    
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i < 10; i++) {
    printf("Digite uma posicao para o vetor");
    scanf("%d", &vetor[i]);
    printf("%d", vetor[i]);
    if(vetor[i] > vetor[i++]){
        printf("O maior numero e' %d", vetor[i]);
    }
    }
    return 0; 
    }