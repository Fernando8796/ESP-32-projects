#include <WiFi.h>
#include <WebServer.h>

const char* SSID = "teste";
const char* password = "12345678";

WebServer server(80);

void handleRoot(){

  String html = 
  "<html>"
  "<head><title>ESP 32</title><head>"
  "<body>"
  "<h1>Hello esp32!</h1>"
  "</body>"
  "</html>";

  server.send(200, "text/html", html);
}

void setup() {
  Serial.begin(115200);
  WiFi.begin(SSID, password);

  while(WiFi.status() != WL_CONNECTED){
    delay(1000);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("Conectado!");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());

  //Server
  server.on("/", handleRoot);
  server.begin();
  Serial.print("Servidor iniciado: ");
  Serial.print("http://");
  Serial.println(WiFi.localIP());
}

void loop() {
  server.handleClient();
}
