//sets variables lightDelay and sectionDelay
int lightDelay = 100;
int sectionDelay = 500;

//setup runs code only once in the very beginning
void setup() {
  //sets the pin mode
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
  //sets the init value
  for (int i = 0; i < 10; i + 2) {
    digitalWrite(i, LOW);
    delay(lightDelay);
  }
}
//loop runs the code over and over
void loop() {
  //
  for (int i = 0; i < 10; i + 2) {
    digitalWrite(i, HIGH);
    delay(lightDelay);
  }
   for (int i = 0; i < 10; i + 2) {
    digitalWrite(i, LOW);
    delay(lightDelay);
  }
}
