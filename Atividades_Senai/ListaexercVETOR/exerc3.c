#include <stdio.h>


    int main() {
      int pares = 0;
      int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
      
      for(int i = 0; i < 10; i++){
        printf("Digite um valor para posicao");
        scanf("%d", &vet[i]);
      }
      for(int i = 0; i < 10; i++) {
        if(vet[i] % 2 == 0) {
          pares++;
        }
      }
      printf("A quantidade de numeros pares e': %d", pares);
      return 0;
    } 