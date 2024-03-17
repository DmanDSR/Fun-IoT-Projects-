/*
  Dylan Sedeno 2022
  Button

  Turns on an RGB LED with one button pin 9, then cycles through six different colors with each press of same button
  turns off RGB LED with other button pin 8
  */
#define RED 2 // defines which pin is used for red
#define GREEN 3 //defines which pin is used for green
#define BLUE 4 // defines which pin is used for blue

int buttonApin = 9; 
int buttonBpin = 8;
int counter = 0; // is suppose to keep track of button presses to help with colors


void setup() 
{
  pinMode(RED, OUTPUT); // initializes the red pin as an output
  pinMode(GREEN, OUTPUT); // initializes the green pin as an output
  pinMode(BLUE, OUTPUT); // initializes the blue pin as an output
  pinMode(buttonApin, INPUT_PULLUP);  // initializes the pushbutton pin as an input
  pinMode(buttonBpin, INPUT_PULLUP);  // initializes the pushbutton pin as an input
}

void loop() 
{
  // NOTE try to change it to high first to see if problem fixes itself
  if (digitalRead(buttonApin) == LOW && counter == 0) // read the state of the pushbutton value and what counters value is
  {
   setColor(255, 255, 0); //yellow
   counter = 1;
  }
  else if (digitalRead(buttonApin) == HIGH && counter == 1)
  {
    setColor(255, 0, 255); //purple
    counter = 2;
  }
   else if (digitalRead(buttonApin) == LOW && counter == 2)
  {
    setColor(255, 0, 0);  // Red
    counter = 3;
  }
   else if (digitalRead(buttonApin) == HIGH && counter == 3)
  {
   setColor(255, 255, 255);  // white
    counter = 4;
  }
   else if (digitalRead(buttonApin) == LOW && counter == 4)
  {
    setColor(0, 0, 255);  // blue
   counter = 5;
  }
   else if (digitalRead(buttonApin) == HIGH && counter == 5)
  {
    setColor(0, 255, 0); //green
  }

  
  if (digitalRead(buttonBpin) == LOW)
  {
    setColor(0, 0, 0); // off
    counter = 0;
  }
}


void setColor(int red, int green, int blue)
{
  analogWrite(RED, red);
  analogWrite(GREEN, green);
  analogWrite(BLUE, blue);  
}
