#include <stdio.h>
    int main() {

        int A[5];
        int soma;
        A[0] = 1;
        A[1] = 0;
        A[2] = 5;
        A[3] = -2;
        A[4] = -5;
        A[5] = 7;

        soma = A[0] + A[1] + A[5];
        printf("A soma dos numeros e' igual a: %d", soma);

        A[4] = 100;

        printf("O valor inteiro de cada vetor A e' igual: %d\n", A[0]);
        printf("O valor inteiro de cada vetor A e' igual: %d\n", A[1]);
        printf("O valor inteiro de cada vetor A e' igual: %d\n", A[2]);
        printf("O valor inteiro de cada vetor A e' igual: %d\n", A[3]);
        printf("O valor inteiro de cada vetor A e' igual: %d\n", A[4]);
        
    return 0;
    }