//calcula Vin e Vout (tensao de entrada e saida)
void setup() {
  Serial.begin(9600);
}

void loop() {
  float R1;
  float R2;
  float I;
  float Vin1;
  float Vin2;
  float Vout1;
  float Vout2;
  float Voutfinal;
  float res;

  Serial.print("Digite o valor do resistor R1:");
  while (!Serial.available());
  R1 = Serial.parseInt();
  Serial.println(R1);

  Serial.print("Digite outro valor para resistor R2:");
  while (!Serial.available());
  R2 = Serial.parseInt();
  Serial.println(R2);

  Serial.print("Digite um valor de tensao da corrente:");
  while (!Serial.available());
  I = Serial.parseInt();
  Serial.println(I);

  Vin1 = R1 + R2;
  Vin2 = Vin1 * I;
  Vout1 = R2 * Vin2;
  Vout2 = R1 + R2;
  Voutfinal = Vout1 / Vout2;
  res = Voutfinal;
  Serial.print("Resultado: ");
  Serial.println(res);
}
