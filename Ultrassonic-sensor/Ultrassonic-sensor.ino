//Sensor Ultrassônico HC-SR04
#define trigPin 12
#define echoPin 13

//variável para armazenar o tempo do pulso
long duracao;

//Distância em cm
int distancia;

void setup() {
  Serial.begin(115200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duracao = pulseIn(echoPin, HIGH);

  distancia = duracao * 0.034 / 2;

  Serial.print("Distância: ");
  Serial.print(distancia);
  Serial.println(" cm");

  delay(500);
}
