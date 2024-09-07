#include <BluetoothSerial.h>

BluetoothSerial SerialBT;

void setup(){
  Serial.begin(115200);
  SerialBT.begin("ESP-32");
}

void loop() {
  if(SerialBT.available()){
    char c = SerialBT.read();

    Serial.print(c);
  }
}