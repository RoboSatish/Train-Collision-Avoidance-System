int sensor1=0;
void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);


}

void loop() {

  sensor1=analogRead(A0);
  Serial.println(sensor1);
  if(sensor1>100)
  {
    Serial.println("Track is Ok");
    Serial.println("TRain is Running");
     digitalWrite(2,HIGH);
     digitalWrite(3,LOW);
     digitalWrite(4,HIGH);
     digitalWrite(5,LOW);
     delay(5000);
  }
  if(sensor1<100)
  {
    Serial.println("Track is Crack");
    Serial.println("Train Stopped");
     digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(5000);
  }
  delay(2000);
/*
 

  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(5000);

 */
}
