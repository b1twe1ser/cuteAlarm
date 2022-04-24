#include <Servo.h>

Servo myservo;

bool is_morning = false;

void setup() {
  pinMode(6, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
  
  myservo.attach(9);
  myservo.write(1); // down note
}

void loop() {

 
   for (int i = 1; i < 86401; i++)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
     
    if(i == 28800)
    { 
      for (int i = 0; i < 8; i++){
         
      tone(3, 400);
      delay(600);
      noTone(3);
      delay(600);
  }
  for(int j = 0; j < 3; j++){
    blink(2);
    myservo.write(170); // up note
    delay(800);
    myservo.write(100);
    delay(800);
    }
  myservo.write(150);
  blink(5);
  }
 }
 myservo.write(1);
  }


  void blink(int num)
  {
    for(int i = 0; i < num; i++)
    {
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    delay(200); 
    }
  }






  
