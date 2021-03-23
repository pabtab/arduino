
int Laser = 6;
int Detector = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Laser, OUTPUT);
  pinMode(Detector, INPUT);
  pinMode(11, OUTPUT); //Led
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Laser, HIGH);
  boolean val = digitalRead(Detector);
  Serial.println(val);

  if(val == 1) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
}
