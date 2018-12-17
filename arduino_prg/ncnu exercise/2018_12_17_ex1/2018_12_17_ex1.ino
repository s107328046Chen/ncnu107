#define a 1
#define b 2
#define c 3
#define d 4
#define e 5

void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  digitalWrite(a,LOW);
    pinMode(b,OUTPUT);
  digitalWrite(b,LOW);
    pinMode(c,OUTPUT);
  digitalWrite(c,LOW);
    pinMode(d,OUTPUT);
  digitalWrite(d,LOW);
    pinMode(e,OUTPUT);
  digitalWrite(e,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(a,HIGH);
  delay(1000); 
  digitalWrite(a,LOW);
  delay(1000); 
    digitalWrite(b,HIGH);
  delay(1000); 
  digitalWrite(b,LOW);
  delay(1000); 
    digitalWrite(c,HIGH);
  delay(1000); 
  digitalWrite(c,LOW);
  delay(1000); 
    digitalWrite(d,HIGH);
  delay(1000); 
  digitalWrite(d,LOW);
  delay(1000); 
    digitalWrite(e,HIGH);
  delay(1000); 
  digitalWrite(e,LOW);
  delay(1000); 
}
