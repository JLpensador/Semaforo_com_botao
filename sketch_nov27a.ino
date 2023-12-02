// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(8, INPUT);
}

void loop()
{
  if(digitalRead(8) == 1){
    for( int led = 0; led < 4; led++){
       digitalWrite(1, HIGH);
      delay(500);
        digitalWrite(1, LOW);
 delay(500);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500);
       for (int i = 0; i < 3; i++){
   digitalWrite(2, HIGH);
      delay(500);
        digitalWrite(2, LOW);
  delay(500);
       }
   if (2 == LOW){
     digitalWrite(1, HIGH);
      delay(500);
        digitalWrite(1, LOW);
 delay(500);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
    delay(500);
   digitalWrite(2, HIGH);
      delay(500);
        digitalWrite(2, LOW);
    delay(500);  }
    }
  }
}
  
  
