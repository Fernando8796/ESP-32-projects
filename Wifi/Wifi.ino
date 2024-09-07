#include <WiFi.h>

const char* SSID = "teste";
const char* password = "12345678";

void setup() {
  
  Serial.begin(115200);
  WiFi.begin(SSID, password);

  Serial.print("Conectando-se a ");
  Serial.println(SSID);

  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }

  // Exibe o endereço IP atribuído ao ESP32
  Serial.println("");
  Serial.println("Conectado ao WiFi!");
  Serial.print("Endereço IP: ");
  Serial.println(WiFi.localIP());
}

void loop() { }
