#include <stdio.h>
//construa uma tabuada do 1 ao 10 e faca somatoria dos resultados de cada uma;
    int main() {

        int coleta[10];
        int i;
        int j;
        int mult;
        int somamult1, somamult2, somamult3, somamult4, somamult5, somamult6, somamult7, somamult8, somamult9;
        int somadasoma;

        for(i = 1; i <= 10; i++) {
           coleta[1] = i * 1; 
           coleta[2] = i * 2;
           coleta[3] = i * 3;
           coleta[4] = i * 4;
           coleta[5] = i * 5;
           coleta[6] = i * 6;
           coleta[7] = i * 7;
           coleta[8] = i * 9;
           coleta[9] = i * 10;
        
        for(j = 1; j <= 10; j++) {
            mult = i * j;
            printf("a tabuada de %d x %d e' igual a = %d \n", i, j, mult);
            
        }
        somamult1 = coleta[1] + coleta[2] + coleta[3] + coleta[4] + coleta[5] + coleta[6] + coleta[7] + coleta[8] + coleta[9];
        somamult2 = coleta[1] + coleta[2] + coleta[3] + coleta[4] + coleta[5] + coleta[6] + coleta[7] + coleta[8] + coleta[9];
        somamult3 = coleta[1] + coleta[2] + coleta[3] + coleta[4] + coleta[5] + coleta[6] + coleta[7] + coleta[8] + coleta[9];
        somamult4 = coleta[1] + coleta[2] + coleta[3] + coleta[4] + coleta[5] + coleta[6] + coleta[7] + coleta[8] + coleta[9];
        somamult5 = coleta[1] + coleta[2] + coleta[3] + coleta[4] + coleta[5] + coleta[6] + coleta[7] + coleta[8] + coleta[9];
        somamult6 = coleta[1] + coleta[2] + coleta[3] + coleta[4] + coleta[5] + coleta[6] + coleta[7] + coleta[8] + coleta[9];
        somamult7 = coleta[1] + coleta[2] + coleta[3] + coleta[4] + coleta[5] + coleta[6] + coleta[7] + coleta[8] + coleta[9];
        somamult8 = coleta[1] + coleta[2] + coleta[3] + coleta[4] + coleta[5] + coleta[6] + coleta[7] + coleta[8] + coleta[9];
        somamult9 = coleta[1] + coleta[2] + coleta[3] + coleta[4] + coleta[5] + coleta[6] + coleta[7] + coleta[8] + coleta[9];
        somadasoma = somamult1 + somamult2+ somamult3 + somamult4 + somamult5 + somamult6 + somamult7 + somamult8 + somamult9;    
        }
        printf("A soma de todas as tabuadas e' igual a %d", somadasoma);
        return 0;
}

