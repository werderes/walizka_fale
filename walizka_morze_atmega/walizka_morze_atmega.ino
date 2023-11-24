
//E131 e131;
unsigned long currentMillis;
float m;
float n;
float tempo = 1;
float o1, o2, o3, o4, o5, o6, o7;
unsigned long timeout = 1800000;
void setup() {

  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  //Serial.begin(9600);
  delay(10);
}

void loop() {

  
  currentMillis = millis();
  m = currentMillis;

    o1 = -127 * cos(m / 999) + 127;
    o2 = min(m/2,255);
    o3 = -127 * cos(m / 888) + 127;
    o4 = min(m/2,255);
    o5 = -127* cos(m / 777) + 127;
    o6 = -127 * cos(m / 666) + 127;

    analogWrite(3, o1);
    analogWrite(5, o2);
    analogWrite(6, o3);            // Dimmer data for Channel 1
    analogWrite(9, o4);
    analogWrite(10, o5);
    analogWrite(11, o6);
/*
    analogWrite(3, 255);
    delay(300);
    analogWrite(3, 0);
    delay(1000);
    
    analogWrite(5, 255);
    delay(300);
    analogWrite(5, 0);
    delay(300);
    analogWrite(5, 255);
    delay(300);
    analogWrite(5, 0);
    delay(1000);

    analogWrite(6, 255);
    delay(300);
    analogWrite(6, 0);
    delay(300);
    analogWrite(6, 255);
    delay(300);
    analogWrite(6, 0);
    delay(300);
    analogWrite(6, 255);
    delay(300);
    analogWrite(6, 0);
    delay(1000);
    
    analogWrite(9, 255);
    delay(300);
    analogWrite(9, 0);
    delay(300);
    analogWrite(9, 255);
    delay(300);
    analogWrite(9, 0);
    delay(300);
    analogWrite(9, 255);
    delay(300);
    analogWrite(9, 0);
    delay(300);
    analogWrite(9, 255);
    delay(300);
    analogWrite(9, 0);
    delay(1000);

    analogWrite(10, 255);
    delay(300);
    analogWrite(10, 0);
    delay(300);
    analogWrite(10, 255);
    delay(300);
    analogWrite(10, 0);
    delay(300);
    analogWrite(10, 255);
    delay(300);
    analogWrite(10, 0);
    delay(300);
    analogWrite(10, 255);
    delay(300);
    analogWrite(10, 0);
    delay(300);
    analogWrite(10, 255);
    delay(300);
    analogWrite(10, 0);
    delay(1000);*/
   
    
  }
   /*Serial.println(o1);
   Serial.println(o2);
   Serial.println(o3);
   Serial.println(o4);
   Serial.println(o5);
   Serial.println(o6);
  //Serial.println(m);*/
