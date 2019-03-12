//sets variables lightDelay and sectionDelay
int lightDelay = 100;
int sectionDelay = 500;
#define a 0
#define b 2
#define c 4
#define d 6 
#define e 8
#define f 10
#define g 12
#define p 14
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
