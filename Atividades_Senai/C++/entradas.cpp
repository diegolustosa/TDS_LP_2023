/*circuito em arduino que contém três tipos de entradas, com resistor pull up, pull down e outra com 
resistor interno, ao dar entrada deverá mostrar qual foi utilizado, no caso mostra pelo multímetro*/



int buttonState2 = 0;
int buttonState3 = 0;
int buttonState11 = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT_PULLUP); 
  pinMode(11, INPUT);
  Serial.begin(9600);
}

void loop()
{
  
  buttonState2 = digitalRead(2);
  buttonState3 = digitalRead(3);
  
  buttonState11 = digitalRead(11);
  if(buttonState11 == LOW) {
    
    Serial.println(buttonState11);
  }
  
  delay(1000); 
  
}