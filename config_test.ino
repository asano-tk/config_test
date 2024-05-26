
void setup() {

  pinMode(PA12, INPUT);
  // pinMode(PA15, INPUT);

  // pinMode(PC15, OUTPUT);
  // pinMode(PC14, OUTPUT);
  pinMode(PC13, OUTPUT);

  digitalWrite(PC13, LOW);
  delay(300);
  digitalWrite(PC13, HIGH);
  delay(300);
  digitalWrite(PC13, LOW);
  delay(300);
  digitalWrite(PC13, HIGH);
  delay(300);
  digitalWrite(PC13, LOW);
  delay(300);
  digitalWrite(PC13, HIGH);
  delay(300);
  digitalWrite(PC13, LOW);

}

void loop() {

  if(digitalRead(PA12) == true){
    digitalWrite(PC13, HIGH);
  }
  else{
    digitalWrite(PC13, LOW);
  }

}
