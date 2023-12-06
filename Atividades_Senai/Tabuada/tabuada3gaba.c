#include <stdio.h>

int main() {
    int i;
    int j;
    int resultado[11];
    int calculaTotal = 0;
     // colocar 0 na variável ou vetor permite eliminar os lixos de memória que possam entrar.
    //primeiro for é responsável por criar o total de tabuadas, multiplicandos.
    //segundo for é responsável por criar as tabuadas individualmente, multiplicadores.
    for(i = 1; i <= 10; i++){
        resultado[i] = 0;
    for(j = 1; j <= 10; j++){
        resultado[i] = resultado[i] + (i*j);
        printf("\n %d x %d = %d", i, j, i*j);
        calculaTotal = calculaTotal + (i*j);
    }

    printf("\n--------------total da tabuada do (%d) = %d ",resultado[j], resultado[i]);
    }       
    printf("\n o resultado total da tabuada e' igual a = %d", calculaTotal);
     return 0;
}
    