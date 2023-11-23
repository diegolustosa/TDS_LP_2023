#include <stdio.h>

void main() {
int num;
int par;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if(num >= 0 && num <= 100) {
    	if (num % 2 == 0) {
        printf("Seu numero e' par");
    	}
    else {
        printf("Seu numero e' impar");
    	}
    }
}
