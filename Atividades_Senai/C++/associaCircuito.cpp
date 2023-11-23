//Calcula as asssociacoes dentro de um circuito
void setup() {
  Serial.begin(9600);
}

void loop() {
  float R1;
  float R2;
  int Escolha;
  float Paraserie = 1 || 2;
  float resserie;
  float repara1;
  float repara2;

  Serial.print("Escolha entre resistor (1), capacitor (2) e indutor (3):");
  while(!Serial.available());
  Escolha = Serial.parseInt();
  Serial.println(Escolha);

  Serial.print("Digite o valor do primeiro resistor, capacitor ou indutor: ");
    while (!Serial.available());
    R1 = Serial.parseInt();
    Serial.println(R1);

    Serial.print("Digite outro valor para o segundo resistor, capacitor ou indutor: ");
    while (!Serial.available());
    R2 = Serial.parseInt();
    Serial.println(R2);

    resserie = R1 + R2;
    repara1 = R1 * R2;
    repara2 = repara1 / resserie;

  switch(Escolha) {

    case 1:

    Serial.print("Voce escolheu resistor\n");

    Serial.print("Digite se os resistores estao em serie (1) ou paralelo (2): \n");
    while (!Serial.available());
    Paraserie = Serial.parseInt();
    Serial.println(Paraserie);

    if(Paraserie == 1) {
      Serial.print("A serie do resistor 1 e resistor 2 e' igual a: \n");
      Serial.println(resserie);
    }
    else {
      Serial.print("O paralelo do resistor 1 e resistor 2 e' igual a: \n");
  	  Serial.println(repara2);
    }
  	break;

    case 2:

    Serial.print("Voce escolheu capacitor\n");

    Serial.print("Digite se os capacitores estao em serie (1) ou paralelo (2): \n");
    while(!Serial.available());
    Paraserie = Serial.parseInt();
    Serial.println(Paraserie);

    if(Paraserie == 1) {
      Serial.print("A serie do capacitor 1 e capacitor 2 e' igual a: \n");
	  Serial.println(repara2);
    }
    else {
      Serial.print("O paralelo do capacitor 1 e capacitor 2 e' igual a: \n");
      Serial.println(resserie);
    }
    break;

    case 3:

    Serial.print("Voce escolheu indutor\n");

    Serial.print("Digite se os indutores estao em serie (1) ou paralelo (2): \n");
    while(!Serial.available());
    Paraserie = Serial.parseInt();
    Serial.println(Paraserie);

    if(Paraserie == 1) {
       Serial.print("A serie do indutor 1 e indutor 2 e' igual a: \n");
       Serial.println(resserie);
    }
    else {
       Serial.print("O paralelo do indutor 1 e indutor 2 e' igual a: \n");
       Serial.println(repara2);
    }
    default:
    Serial.print("Opcao nao esta' disponivel");
    break;
    }
    }
