const int redLED = 9;
const int greenLED = 7;
const int redButton = 3;
const int greenButton = 5;

bool redState = false;
bool greenState = false;

bool lastRedButton = HIGH;
bool lastGreenButton = HIGH;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redButton, INPUT_PULLUP);
  pinMode(greenButton, INPUT_PULLUP);
}
void loop() {
  bool currentRedButton = digitalRead(redButton);
  bool currentGreenButton = digitalRead(greenButton);

  if (lastRedButton == HIGH && currentRedButton == LOW) {
    redState = !redState;
    digitalWrite(redLED, redState);
    delay(200);
  }

  if (lastGreenButton == HIGH && currentGreenButton == LOW) {
    greenState = !greenState;
    digitalWrite(greenLED, greenState);
    delay(200);
  }

  lastRedButton = currentRedButton;
  lastGreenButton = currentGreenButton;
}
