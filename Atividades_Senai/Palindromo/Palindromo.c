#include <stdio.h>
#include <stdbool.h>

bool ehPalindromo(int numero) {
    int original = numero;
    int reverso = 0;

    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    return original == reverso;
}

int main() {
    int numero;

    printf("Digite um numero de 4 digitos: ");
    scanf("%d", &numero);

    if (numero >= 1 && numero <= 9999) {
        if (ehPalindromo(numero)) {
            printf("O numero e um palindromo!\n");
        } else {
            printf("O numero nao e um palindromo!\n");
        }
    } else {
        printf("Por favor, insira um numero de 4 digitos.\n");
    }

    return 0;
}
