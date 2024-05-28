//Atividade simples que imprime um bom dia ao clicar no botao
int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop()
{
  
  buttonState = digitalRead(2);
  
  delay(10); 
  if(buttonState == 1) {
   Serial.println("Bom dia");
  delay(2000);
  }
}