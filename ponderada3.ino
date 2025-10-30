const byte GREEN = 10;
const byte YELLOW = 11;
const byte RED = 12;
const int Sec = 1000;

void setup() {
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
	temp(6, &RED);
  temp(2, &YELLOW);
  temp(4, &GREEN);
}

void temp(int n, byte *COLOR){
  analogWrite(*COLOR, 255);
  delay(n*Sec);
  analogWrite(*COLOR, 0);
  delay(100);
}