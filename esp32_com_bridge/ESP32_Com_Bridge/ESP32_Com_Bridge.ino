




//Set Bawaan
//Serial Rx: 40, Tx: 41
//Serial1 Rx: 9, Tx: 10
//Serial2 Rx: 16, Tx: 17

void setup() {
  // start communication with baud rate 9600
  Serial.begin(115200);   // Serial Monitor
  Serial2.begin(9600);  // RS232

  // wait a moment to allow serial ports to initialize
  delay(100);
}

void loop() {
  // Check if there's data available on Serial
  if (Serial2.available()) {
    char data = Serial2.read();  // read the received character
    // char data0[] = "resp: ";
    // char dataRespon[5 + strlen(data)] = data0 + data;
    Serial2.write(data);
    Serial.print(data);          // print the recived data to Serial Monitor
  }
  if (Serial.available()) {
    char data = Serial.read();  // read the received character
    Serial2.write(data);
    Serial.print(data);          // print the recived data to Serial Monitor
  }
}