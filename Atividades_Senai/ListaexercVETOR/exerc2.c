#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    int soma;
    int vetor[9];


    for(int i = 0; i < 9; i++) {
        
        
    
        printf("Digite um valor para posicao x: \n");
        scanf("%d", &vetor[4]);
        printf("Digite um valor para posicao y: \n");
        scanf("%d", &vetor[6]);
        x = vetor[4];
        y = vetor[6];
        soma = x + y;
        printf("A somatoria de %d(x) e %d(y) e' igual a: %d", x, y, soma);
    
    }
}
