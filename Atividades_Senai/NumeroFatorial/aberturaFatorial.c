#include <stdio.h>
//codigo para abertura de fatorial de um numero.
int validarEntrada() {
int num;
    do {
        printf("Digite um numero positivo para abrir o fatorial");
        scanf("%d", &num);
    if(num < 0) {
        printf("Por favor insira um numero positivo maior que zero para que seja valido");
    }
}    while(num < 0);
    return num;
}
int fatorial(int alvo) {
  int num;
  int fato = 1;

  for(num = 1; num <= alvo; num++) {
    fato *= num;
  }
  return fato;
}

void main() {
  int alvo = validarEntrada();
  int num;
  int fato = fatorial(alvo);
  printf("O fatorial de %d e' %d\n", alvo, fato);
}
