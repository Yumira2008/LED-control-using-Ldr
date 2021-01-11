int ledpin = 2;
int ldrpin = A0;

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(ledpin,OUTPUT);
   pinMode(ldrpin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int ldr = analogRead(ldrpin);

  if(ldr <= 325){
    digitalWrite(ledpin,HIGH);
    Serial.println("LED is on");
  }
  else {
    digitalWrite(ledpin,LOW);
    Serial.println("LED is off");
  }

}
