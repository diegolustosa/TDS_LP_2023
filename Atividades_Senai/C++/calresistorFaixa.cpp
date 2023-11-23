//calcula os resistores e suas faixas de multiplicacao

char valor1;
char valor2;
char multiplicador;
long resistor;
long resistor2;
long resultado;
char tolerancia;
long MenorTolerancia;
long MaiorTolerancia;
long valorTolerancia;


void setup() {
Serial.begin(9600);

}
void loop() {
Serial.println("Digite a primeira as letras que identificam a cor do resistor:");
Serial.println("Digite o primeiro valor:");
while (!Serial.available());
valor1 = Serial.read();
switch (valor1) {
case 'p':
  resistor = 0;
break;
case 'm':
  resistor = 1 * 10;
break;
case 'v':
  resistor = 2 * 10;
break;
case 'l':
  resistor = 3 * 10;
break;
case 'a':
  resistor = 4 * 10;
break;
case 've':
  resistor = 5 * 10;
break;
case 'az':
  resistor = 6 * 10;
break;
case 'vl':
  resistor = 7;
break;
case 'c':
  resistor = 8;
break;
case 'b':
  resistor = 9;
break;
default:
break;
}
Serial.println("Digite o segundo valor:");
while (!Serial.available());
valor2 = Serial.read();
switch (valor2) {
case 'p':
  resistor2 = 0;
break;
case 'm':
  resistor2 = 1;
break;
case 'v':
  resistor2 = 2;
break;
case 'l':
  resistor2 = 3;
break;
case 'a':
  resistor2 = 4;
break;
case 've':
  resistor2 = 5;
break;
case 'az':
  resistor2 = 6;
break;
case 'vl':
  resistor2 = 7;
break;
case 'c':
  resistor2 = 8;
break;
case 'b':
  resistor2 = 9;
default:
break;
}
Serial.println("Digite multiplicador:");
while (!Serial.available());
multiplicador = Serial.read();
switch (multiplicador) {
case 'p':
  multiplicador = 1;
break;
case 'm':
  multiplicador = 10;
break;
case 'v':
  multiplicador = 100;
break;
case 'l':
  multiplicador = 1000;
break;
case 'a':
  multiplicador = 10000;
break;
case 've':
  multiplicador = 100000;
break;
case 'vl':
  multiplicador = 1000000;
break;
default:
break;
}
resultado = resistor + resistor2;
  resultado = resultado * multiplicador;
  Serial.println(resultado);

  Serial.println("Digite a tolerancia dourada(1), prata(2), semcor(3) :");
while (!Serial.available());
tolerancia = Serial.read();
  switch (tolerancia) {
case '1':
  valorTolerancia = resultado * 0.05;
  MenorTolerancia = resultado - valorTolerancia;
  MaiorTolerancia = resultado + valorTolerancia;
break;
case '2':
  valorTolerancia = resultado * 0.10;
  MenorTolerancia = resultado - valorTolerancia;
  MaiorTolerancia = resultado + valorTolerancia;
break;
case '3':
  valorTolerancia = resultado * 0.20;
  MenorTolerancia = resultado - valorTolerancia;
  MaiorTolerancia = resultado + valorTolerancia;
break;

  }
  Serial.println(MenorTolerancia);
  Serial.println(MaiorTolerancia);
}
