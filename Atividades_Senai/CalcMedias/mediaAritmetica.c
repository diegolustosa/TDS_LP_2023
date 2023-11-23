#include <stdio.h>

int main () {

char nomeAluno[20];
float nota1, nota2, nota3, nota4;
float media;

printf("digite o nome do aluno: \n");
scanf("%s", nomeAluno);

printf("digite as quatro notas do aluno separadas por vírgula \n");
scanf("%f,%f,%f,%f", &nota1, &nota2, &nota3, &nota4);

media = (nota1 + nota2 + nota3 + nota4) / 4.0;

printf("O nome do aluno é %s\n: ", nomeAluno);
printf("As notas dos aluno são : %.2f, %.2f, %.2f, %.2f\n", nota1, nota2, nota3, nota4);
printf("A média das notas é %.2f\n", media);


return 0;

}
