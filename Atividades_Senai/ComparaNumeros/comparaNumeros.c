#include <stdio.h>
//Esse codigo busca comparar tres numeros para descobrir o maior numero e menor numero.
int main() {
//Declaracao
float num1;
float num2;
float num3;
float numeroMenor;
float numeroMaior;


//Entrada do usu�rio
    printf("digite o primeiro numero: \n");
    scanf("%f", &num1);
    printf("digite o segundo numero: \n");
    scanf("%f", &num2);
    printf("digite o terceiro numero: \n");
    scanf("%f", &num3);


//Bloqueio de n�meros iguais
    if(num1 == num2) {
        printf("O num1 e igual ao num2");

    }
    if(num2 == num3) {
        printf("O num2 e igual ao num3");

    }
    else if(num3 == num1) {
        printf("O num3 e igual ao num1");

    }
    //Identifica��o do maior n�mero
    if(num1 > num2 && num1 > num3){
        printf("O n�mero %.2f e o maior n�mero \n", num1);
    }
    if(num2 > num3 && num2 > num1) {
        printf("O n�mero %.2f e o maior n�mero \n", num2);
    }
    else if(num3 > num2 && num3 > num1){
        printf("O n�mero %.2f e o maior n�mero \n", num3);
    }

    //Identifica��o do menor n�mero
        if(num2 < num3 && num2 < num1) {
            printf("O n�mero %.2f e o menor n�mero \n", num2);

    }
        if(num3 < num1 && num3 < num2) {
            printf("O n�mero %.2f e o menor n�mero \n", num3);
    }
        else if(num1< num2 && num1 < num3) {
            printf("O n�mero %.2f e o menor n�mero \n", num1);
    }
    return 0;
    }
