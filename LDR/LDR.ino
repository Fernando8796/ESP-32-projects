#define LDR 13
#define LED 12

void setup() {
  Serial.begin(115200);

  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  //Pegando a luminosidade do LDR
  int luminosidade = analogRead(LDR);

  if(luminosidade <= 100){
    digitalWrite(LED, HIGH);
    Serial.println("LED ligado!");
  } else {
    digitalWrite(LED, LOW);
    Serial.println("LED desligado!");
  }

  Serial.println(luminosidade);
  delay(100);
}