#define BUTTON 13
#define LED 12

void setup() {
  Serial.begin(115200);
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() {
  if(digitalRead(BUTTON) == LOW){
    Serial.println("Botão está clicado");
    digitalWrite(LED, HIGH);
  } else {
    Serial.println("Botão não está clicado");
    digitalWrite(LED, LOW);
  }
  delay(100);
}
