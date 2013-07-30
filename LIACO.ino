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
