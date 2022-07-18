void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(4,INPUT);
  

}

void loop() {
  if(digitalRead(4)==LOW)
  {
    digitalWrite(10,HIGH);
    digitalWrite(7,HIGH);
    delay(50);
    digitalWrite(7,LOW);
    delay(50);
    
  }
  else
  {
    digitalWrite(10,LOW);
    digitalWrite(7,LOW);
  }
  // put your main code here, to run repeatedly:

}
