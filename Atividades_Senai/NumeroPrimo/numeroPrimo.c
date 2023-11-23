#include <stdio.h>

void main() {
int num;
int par;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if(num >= 0 && num <= 100) {
        if (num % num == 0 && num % 1 == 0) {
        printf("Seu numero e' primo");
        }
    else {
        printf("Seu numero nao e' primo");
    }
    }
}

