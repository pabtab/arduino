int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH); // Turn the LED on
  delay(2000);// Wait for 1000 milliseconds (1 second)
  digitalWrite(led, LOW);
  delay(2000);
}
