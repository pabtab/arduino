int buttonState = 0; //State button
int ledState = 0; 
int stateBeforeButton = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(10, INPUT); //Button
  pinMode(13, OUTPUT); //Led
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(8); // read state of button

  if((buttonState == HIGH) && (stateBeforeButton == LOW)) {
    ledState = 1 - ledState;
  }

  stateBeforeButton = buttonState;
  
  if(ledState == 1) { // if state is high
    digitalWrite(13, HIGH); // turn on led
  } else {
    digitalWrite(13, LOW); // turn off led
  }
}
