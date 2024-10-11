#define VERDE 21
#define AMARELO 19
#define VERMELHO 18

void setup(){
  pinMode(VERDE, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERMELHO, OUTPUT);
}

void loop(){

  //Sinal Vermelho
  digitalWrite(VERMELHO, HIGH);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERDE, LOW);
  delay(5000);

  //Sinal Amarelo
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELO, HIGH);
  digitalWrite(VERDE, LOW);
  delay(2000);

  //Sinal Verde
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERDE, HIGH);
  delay(5000);
}
