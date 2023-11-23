int main() {
    char nomeAluno[20];
    float nota1, nota2, nota3, nota4;
    float mediaAritmetica, mediaPonderada, mediaHarmonica;
    int pesoNota1 = 2, pesoNota2 = 2, pesoNota3 = 3, pesoNota4 = 5;

    printf("Digite o nome do aluno(a): ");
    scanf("%s", nomeAluno);

    printf("Digite as quatro notas do aluno(a) (separadas por vírgula): ");
    scanf("%f, %f, %f, %f", &nota1, &nota2, &nota3, &nota4);

    if(nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 &&
        nota3 >= 0 && nota3 <= 10 && nota4 >= 0 && nota4 <= 10 && nota1 != 0 && nota2 != 0 && nota3 != 0 && nota4 != 0) {

            mediaAritmetica = (nota1 + nota2 + nota3 + nota4) / 4.0;

            mediaPonderada = (pesoNota1 * nota1 + pesoNota2 * nota2 +
                          pesoNota3 * nota3 + pesoNota4 * nota4) / 12.0;

            mediaHarmonica = 4 / (1.0 / nota1 + 1.0 / nota2 +
                              1.0 / nota3 + 1.0 / nota4);

        printf("O nome do aluno(a) e' %s\n", nomeAluno);
        printf("As notas do(a) aluno(a) são: %.2f, %.2f, %.2f, %.2f\n", nota1, nota2, nota3, nota4);
        printf("A média aritmética das notas é: %.2f\n", mediaAritmetica);
        printf("A média ponderada das notas é: %.2f\n", mediaPonderada);
        printf("A média harmônica das notas é: %.2f\n", mediaHarmonica);
    } else {
        printf("Erro: Verifique se todas as notas estão entre 0 e 10 e nenhuma delas é zero.\n");
    }

    return 0;
}
