#include <stdio.h>

int main () {

// M�dia ponderada! Primeira e segunda nota com peso 2, terceira nota com peso 3
// �ltima nota com peso 5
char nomeAluno[20];
float nota1, nota2, nota3, nota4;
float mediaPonderada;
int pesonota1 = 2, pesonota2 = 2, pesonota3 = 3, pesonota4 = 5;

printf("digite o nome do aluno:\n");
scanf("%s", nomeAluno);

printf("digite as quatro notas: (separadas por v�rgula)");
scanf("%f,%f,%f,%f", &nota1, &nota2, &nota3, &nota4);

mediaPonderada = (pesonota1*nota1 + pesonota2*nota2 + pesonota3*nota3 + pesonota4*nota4) / 12.0;

printf("O nome do aluno � %s \n", nomeAluno);
printf("As notas do(a) aluno(a) %s s�o : %.2f, %.2f, %.2f, %.2f\n", nomeAluno, nota1, nota2, nota3, nota4);

printf("A media das notas � %.2f\n", mediaPonderada);


return 0;

}
