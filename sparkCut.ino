

const byte Pin = 7;
const byte Pout = 2;

void setup(){
  pinMode(Pin,INPUT);
  pinMode(Pout,OUTPUT);
  
  digitalWrite(Pout,HIGH);

}

void loop() {

  if (!digitalRead(Pin)){
    digitalWrite(Pout,LOW);
    delay(100);
    digitalWrite(Pout,HIGH);

    while(!digitalRead(Pin)){} 
    delay(50);
  }
}
