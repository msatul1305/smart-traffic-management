char sval='a';
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
  //if(Serial.available()>0){
      sval=Serial.read();
      if(sval=='r'){
        digitalWrite(12,HIGH);
        digitalWrite(3,LOW);
        digitalWrite(5,LOW);
        //delay(2000);
     
        }
      else if(sval=='y'){
        digitalWrite(3,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(12,LOW);
        //delay(2000);
        }
      else if(sval=='g'){
        digitalWrite(5,HIGH);
        digitalWrite(3,LOW);
        digitalWrite(12,LOW);
        //delay(2000);
        }
//      else{
//        digitalWrite(12,LOW);
//        digitalWrite(3,LOW);
//        digitalWrite(5,LOW);
//        }
//    }
//  }
}
