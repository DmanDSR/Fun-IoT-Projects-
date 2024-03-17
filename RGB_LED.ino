//Dylan Sedeno
// Define Pins
#define RED  2
#define GREEN  3
#define BLUE  4

void setup()
{

  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);  
}

void loop()
{
  setColor(0, 255, 255);  // aqua
  delay(1000);
  setColor(255, 255, 255);  // white
  delay(1000);
  setColor(128, 0, 0);  // maroon
  delay(1000);
  setColor(80, 0, 80);  // purple
  delay(1000);  
  setColor(255, 255, 0);  // yellow
  delay(5000);
}

void setColor(int red, int green, int blue)
{
  analogWrite(RED, red);
  analogWrite(GREEN, green);
  analogWrite(BLUE, blue);  
}
