long anterior = millis();
int storage1, storage2;
int redLed = millis();
int greenLed = millis();

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
}
long atual;
void loop()
{
  atual = millis();
  if(atual - anterior >= 10000){
  
  Serial.println("PASSOU 10 SEGUNDOS?");
  
  storage1 = digitalRead(2);
  storage2 = digitalRead(3);
  /*Nesse código temos a opção de deixar funcionando com o clique
  no botão o LED ou deixar por temporizador, só teria de remover
  os acionamentos por clique e alterar as condicionais por tempo.
  */
    
  if(storage1 == 1) {
    
    digitalWrite(5, HIGH);
  }
    
    else if(redLed >= 5000) {
      digitalWrite(5, LOW);
    }
  
    else if(storage1 == 0) {
      digitalWrite(5, LOW);
    }
  
  if(storage2 == 1) {
    
    digitalWrite(11, HIGH);
   } 
   else if(greenLed < 6000) {
      digitalWrite(11, LOW);
   }
   else if(storage2 == 0) {
      digitalWrite(11, LOW);
    }
	anterior = atual; 
  }
}    
  
  
  