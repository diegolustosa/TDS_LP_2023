#include <stdio.h>

    int main() {
    int num;
    printf("Digite um numero");
    scanf("%d", &num);

    if(num % 2 == 0) {

        printf("Seu numero e' par");
    }

    else {
        printf("Seu numero e' impar");
    }
    return 0;
    }


