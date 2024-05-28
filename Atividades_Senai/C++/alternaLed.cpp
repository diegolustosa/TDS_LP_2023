/*Atividade que alterna entre os estados dos LEDs entre vermelho e verde, o vermelho sempre estará ligado
quando aperta o botão interrompe o vermelho e acende o verde, quando solta retorna ao estado original*/

int buttonState = 0;
int StateLed;
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 
  Serial.println(buttonState);
  StateLed = digitalRead(2);
  
  if(StateLed == 1) {
    Serial.println("parabens");
    digitalWrite(4, HIGH);
  	delay(2000);
  }   
  
  if(StateLed == 0) {
     Serial.println("Temos o verde");
     digitalWrite(3, HIGH);
     digitalWrite(4, LOW);
    }
  
}