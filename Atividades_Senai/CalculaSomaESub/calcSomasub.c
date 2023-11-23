#include <stdio.h>

float validaFloat(float menor, float maior) {
}

int validaInt(int menor, int maior){
int inteiro;
do {
    printf("Digite um valor entre %d e %d:\n", menor, maior);
    scanf("%d", &inteiro);
    }
    while(inteiro < menor || inteiro > maior);
    return inteiro;
}

void soma() {
int a, b, resultado;
a = validaInt(-1000, 1000);
b = validaInt(-1000, 1000);
    printf("\nDigite um numero\n",&a);
    printf("\nDigite outro numero\n",&b);
    resultado = a + b;
    printf("\n a soma e %d", a + b);
}
void subtraia() {
int a, b, resultado;
a = validaInt(-1000, 1000);
b = validaInt(-1000, 1000);
    printf("Digite um numero", &a);
    printf("Digite outro numero",&b);
    resultado = a - b;
    printf("\n a soma e %d", resultado);

}

void main() {
int calc;
        printf("Digite (1) para somar, (2) para subtrair ou qualquer outra tecla para sair:\n");
        scanf("%d", &calc);

    switch(calc) {

        case 1:
        soma();
        break;

        case 2:
        subtraia();
        break;

        default:
        printf("Voce optou por sair");
        }
    }

