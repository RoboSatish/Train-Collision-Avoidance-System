int sensor1;
int sensor2;
void setup() 
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() 
{
    
  sensor1=analogRead(A0);
  sensor2=analogRead(A1);
  Serial.print(sensor1);
  Serial.print(",");
  Serial.println(sensor2);

  if (sensor1 <100 && sensor2 <100)
  {
    Serial.println("Train Started");
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
   // delay(2000);
  }
  if (sensor1 >100 || sensor2 >100)
  {
    Serial.println("Trained Stopped");
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW); 
    digitalWrite(6,HIGH);
    
    delay(2000);
  }
  
 
  delay(1000);
}
