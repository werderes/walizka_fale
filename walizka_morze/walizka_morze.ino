
//#include <ESP8266WiFi.h>
//#include <ESPAsyncE131.h>
//#include <E131.h>
//const char ssid[] = "Maszt5G";         /* Replace with your SSID */
//const char passphrase[] = "Genowefa42";   /* Replace with your WPA2 passphrase */

//E131 e131;
unsigned long currentMillis;
float m;
float tempo = 1;
float o1, o2, o3, o4, o5, o6, o7;

void setup() {

  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(13, OUTPUT);

  Serial.begin(115200);
  delay(10);

  /* Choose one to begin listening for E1.31 data */
  //e131.begin(ssid, passphrase);               /* via Unicast on the default port */
  //e131.beginMulticast(ssid, passphrase, 1); /* via Multicast for Universe 1 */
}

void loop() {

  currentMillis = millis();
  m = currentMillis;
  o1 = -128*cos(m/1000)+128;
  o2 = -128*cos(m/900)+128;
  o3 = -128*cos(m/800)+128;
  o4 = -128*cos(m/700)+128;
  o5 = -128*cos(m/600)+128;
  o6 = -128*cos(m/500)+128;
  o7 = -128*cos(m/2000)+128;
    analogWrite(2, o1);
    analogWrite(4, o2);
    analogWrite(5, o3);            // Dimmer data for Channel 1
    analogWrite(13, o4);
    analogWrite(12, o5);
    analogWrite(14, o6);
    analogWrite(16, o7);
    //analogWrite(9, o8);

  Serial.println(o1);
  Serial.println(m);
}
