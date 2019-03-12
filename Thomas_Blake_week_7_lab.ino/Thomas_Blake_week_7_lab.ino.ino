
#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
#define p 9
int numDelay = 1000;
int numDelayx2 = 2000;
void setup() {
  //sets the pin mode
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  //sets the init value
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(f, LOW);
  digitalWrite(p, LOW);
}

void loop() {
  numOne ();
  delay (numDelay);
  numVoid();
  delay (numDelay);
  numOnePeriod ();
  delay (numDelay);
  numTwo ();
  delay (numDelay);
  numOnePeriod ();
  delay (numDelay);
  numZero();
  delay (numDelay);
  numTwo();
  delay (numDelay);
  numVoid();
  delay (numDelayx2);
  
}
void numVoid(){
  digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(f, LOW);
    digitalWrite(p, LOW);
}
void numZero(){
  digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(p, LOW);
}
void numTwo(){
  digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(p, LOW);
}
void numTwoPeriod(){
  digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(p, HIGH);
}
void numOne(){
  digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(f, LOW);
    digitalWrite(p, LOW);
}
void numOnePeriod(){
  digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(f, LOW);
    digitalWrite(p, HIGH);
}
