const int blueled = 13;
const int buzzar= 12 ;
const int ldr = A0;
void setup() {
  Serial.begin(9600);
  pinMode(blueled, OUTPUT);
  pinMode(buzzar, OUTPUT);
  pinMode(ldr, INPUT);
}
void loop() {
  int ldrStatus = analogRead(ldr); //read the statust of ldr value
  if (ldrStatus >=400)
  {
      noTone (buzzar);
   digitalWrite (blueled ,LOW);
    Serial.println("Alarm Deactivated");
  }
  else
  {
      tone (buzzar, 100);
   digitalWrite (blueled,HIGH);
   noTone (buzzar);
   digitalWrite (blueled,LOW);
   delay (100);
   Serial.println("-----Alarm Activated-----");
  }


}
