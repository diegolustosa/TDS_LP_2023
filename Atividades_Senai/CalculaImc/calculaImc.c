#include <stdio.h>
float validaPeso(float menor, float maior){
float peso;
    do{
        printf("Digite um peso entre %.2f e %.2f: \n", menor, maior);
        scanf("%f", &peso);
}
    while(peso < menor || peso > maior);
    return peso;
}
float validaAltura(float menor, float maior) {
float altura;
    do{
        printf("Digite uma altura entre %.2f e %.2f: \n", menor, maior);
        scanf("%f", &altura);
}
    while(altura < menor || altura > maior);
    return altura;
}

float controlimc() {
   float altura1;
   float imc;
   float peso;
   float altura;
        printf("Digite seu peso:\n");
        peso = validaPeso(30, 150);
        printf("\nDigite uma altura:\n");
        altura = validaAltura(1.50, 3.00);
        altura1 = altura * altura;
        imc = peso / altura1;
        return imc;
    }

void mostraIMC()
{
    float imc;
    if(imc < 18.5) {
        printf("Seu peso e' considerado pela tabela imc adultos como: Baixo Peso\n");
    }
    else if(imc > 19.0) {
        printf("Seu peso e' considerado pela tabela imc adultos como: Peso Normal\n");
    }
    if(imc > 25.0) {
        printf("Seu peso e' considerado pela tabela imc adultos como: Excesso de Peso\n");
    }
    else if(imc > 30.0) {
        printf("Seu peso e' considerado pela tabela imc adultos como: Obesidade de Classe 1\n");
    }
    if(imc > 35.0) {
        printf("Seu peso e' considerado pela tabela imc adultos como: Obesidade de Classe 2\n");
    }
    else if (imc > 39.0) {
        printf("Seu peso e' considerado pela tabela imc adultos como: Obesidade de Classe 3\n");
    }
}
void main() {
  float imc = controlimc();
  mostraIMC();
}
