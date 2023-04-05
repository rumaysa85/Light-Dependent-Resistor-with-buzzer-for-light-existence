const int led = 13;
const int buzzer = 12;
const int ldrPin = A0;

void setup() {
  Serial.begin(9600);

  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(ldrPin,INPUT);

}

void loop() {
  int ldrStatus = analogRead(led); //read the state of the ldr value
  if (ldrStatus>=400){

    tone(buzzer,100);
    digitalWrite(led,HIGH);
    delay(100);

    noTone(buzzer);
    digitalWrite(led,LOW);
    delay(100);

    Serial.println("-----------------ALARM ACTIVATED-------------------");
  }
   else{
    noTone(buzzer);
    digitalWrite(led,LOW);

    Serial.println("---ALARM DEACTIVATED------");
   }
}
