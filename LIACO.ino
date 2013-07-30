/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 12;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  
  for ( int i = 0; i <= 12 ; i += 1 )
 { 
  digitalWrite(i, LOW);
  digitalWrite(i + 1, HIGH);
  delay(50);
}
  for ( int i = 12; i >= 0 ; i -= 1)
 { 
  digitalWrite(i, LOW);
  digitalWrite(i - 1, HIGH);
  delay(50);
}
