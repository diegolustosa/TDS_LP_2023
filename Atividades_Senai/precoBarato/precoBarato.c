#include <stdio.h>
//encontra produto mais barato
int main() {
    // Vari�veis para armazenar informa��es sobre os produtos
    char nomeProduto1[20], nomeProduto2[20], nomeProduto3[20];
    float precoProduto1, precoProduto2, precoProduto3;
    float pesoProduto1, pesoProduto2, pesoProduto3;
    float resultado1, resultado2, resultado3;

    // Solicita ao usu�rio que insira informa��es sobre o primeiro produto
    printf("Digite o nome do primeiro produto: ");
    scanf("%s", nomeProduto1);
    printf("Digite o pre�o do primeiro produto: ");
    scanf("%f", &precoProduto1);
    printf("Digite o peso em quilogramas do primeiro produto: ");
    scanf("%f", &pesoProduto1);

    // Solicita ao usu�rio que insira informa��es sobre o segundo produto
    printf("Digite o nome do segundo produto: ");
    scanf("%s", nomeProduto2);
    printf("Digite o pre�o do segundo produto: ");
    scanf("%f", &precoProduto2);
    printf("Digite o peso em quilogramas do segundo produto: ");
    scanf("%f", &pesoProduto2);

    // Solicita ao usu�rio que insira informa��es sobre o terceiro produto
    printf("Digite o nome do terceiro produto: ");
    scanf("%s", nomeProduto3);
    printf("Digite o pre�o do terceiro produto: ");
    scanf("%f", &precoProduto3);
    printf("Digite o peso em quilogramas do terceiro produto: ");
    scanf("%f", &pesoProduto3);

    // Realiza a multiplica��o para cada produto
    resultado1 = precoProduto1 * pesoProduto1;
    resultado2 = precoProduto2 * pesoProduto2;
    resultado3 = precoProduto3 * pesoProduto3;

    // Exibe os resultados
    printf("\nResultados:\n");
    printf("%s: R$ %.2f x %.2f kg = R$ %.2f\n", nomeProduto1, precoProduto1, pesoProduto1, resultado1);
    printf("%s: R$ %.2f x %.2f kg = R$ %.2f\n", nomeProduto2, precoProduto2, pesoProduto2, resultado2);
    printf("%s: R$ %.2f x %.2f kg = R$ %.2f\n", nomeProduto3, precoProduto3, pesoProduto3, resultado3);

    return 0;
}
