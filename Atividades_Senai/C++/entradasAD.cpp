/*circuito que lê informações de uma porta AD (analógica digital) e retorna os valores que são lidos*/

int analogPin = A1;

int val;        

void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT);
  
}

void loop() {
  analogRead(analogPin);
  val = analogRead(A1);
  
  if(analogPin == 1) {
    Serial.print("Humm estou lendo esse valor: ");  
    Serial.println(val);
    
}
}
