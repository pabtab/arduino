int ledState = 0;
int LED = 12;
int LASER = 10;
int DETECTOR = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(LASER, OUTPUT);
  pinMode(DETECTOR, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LASER, HIGH);
  boolean val = digitalRead(DETECTOR);
  Serial.println(val);
}
