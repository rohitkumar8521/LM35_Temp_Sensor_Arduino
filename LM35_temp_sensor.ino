void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);

}
void delay_ms(unsigned long ms)        // calculate delay in milliseconds
{
  unsigned long start = millis ();
  while (millis () - start < ms)
    { }
 }
void loop() {
  // put your main code here, to run repeatedly:
  float value = analogRead(A0);
  float temp = (value * 500)/1023;  // calculate temperature
  Serial.print("Temperature:");  //print on screen
  Serial.print(temp); 
  Serial.print("'c");
  Serial.println();

  if(temp > 30)             // check condition
  {
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay_ms(500);              // wait for a 250 milliseconds
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  delay_ms(500);              // wait for a 250 milliseconds
  }
  else
  {
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay_ms(250);              // wait for a 500 milliseconds
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  delay_ms(250);             // wait for a 500 milliseconds
  }

}
