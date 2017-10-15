//Blinking LED
const int LED = 13;//LED connected to digital pin 13
void setup()//this specifies that setup function is defined now 
{
  pinMode(LED, OUTPUT);//tells arduino how to use the pin like here its sets the digital pin as output.
}
void loop()
{
  digitalWrite(LED, HIGH);   // turns the LED on 
  delay(1000);      // waits for a second 
  digitalWrite(LED, LOW);      // turns the LED off 
  delay(1000); // waits for a second 
}

