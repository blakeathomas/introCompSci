//defines the pins as certain var names 
#define red1 3
#define red2 5
#define red3 7
#define red4 9
#define red5 11
#define red6 13
/*
 sets variables lightDelay and sectionDelay 
 */
int lightDelay = 100;   
int sectionDelay = 500;

//setup runs code only once in the very beginning
void setup(){

  //sets the pin mode 
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
  //sets the init value
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
  digitalWrite(red4, LOW);
  digitalWrite(red5, LOW);
  digitalWrite(red6, LOW);
   
}

//loop runs the code over and over
void loop()
{
  //turns on each of the leds pausing between each led
  digitalWrite(red1, HIGH);
  delay (lightDelay);
  digitalWrite(red2, HIGH);
  delay (lightDelay);
  digitalWrite(red3, HIGH);
  delay (lightDelay);
  digitalWrite(red4, HIGH);
  delay (lightDelay);
  digitalWrite(red5, HIGH);
  delay (lightDelay);
  digitalWrite(red6, HIGH);

  delay (sectionDelay);
//turns off each of the leds pausing between each led 
  digitalWrite(red6, LOW);
  delay (lightDelay);
  digitalWrite(red5, LOW);
  delay (lightDelay);
  digitalWrite(red4, LOW);
  delay (lightDelay);
  digitalWrite(red3, LOW);
  delay (lightDelay);
  digitalWrite(red2, LOW);
  delay (lightDelay);
  digitalWrite(red1, LOW);

  delay (sectionDelay);
  
 }
