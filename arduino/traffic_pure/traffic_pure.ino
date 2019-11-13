void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  Serial.begin(9600);

}

void loop() {
        digitalWrite(12,HIGH);
        digitalWrite(3,LOW);
        digitalWrite(5,LOW);
        delay(6000);
        digitalWrite(3,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(12,LOW);
        delay(1000);
        digitalWrite(5,HIGH);
        digitalWrite(3,LOW);
        digitalWrite(12,LOW);
        delay(3000);
        digitalWrite(3,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(12,LOW);
        delay(1000);


}
