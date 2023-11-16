#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX
String x; 
void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
}

void loop() { // run over and over

  if (mySerial.available()) {
    
    Serial.write(mySerial.read());
    
    
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
  /* shart
  
    if(mySerial.read() == '1'){
    Serial.println("arash");
  }
      if(mySerial.read() == '2'){
    Serial.println("moazami");
  }
      if(mySerial.read() == '3'){
    Serial.println("goodarze");
  }

 */
}
