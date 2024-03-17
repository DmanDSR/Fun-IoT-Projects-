//Dylan Sedeno
int input = 0, rate; // variables used for program
String repeat = "yes";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("This program is to set the rate of at which the LED blinks"); // informs user about program
  Serial.println("input a number 1 - 9 to set the rate. 1 is fastest and 9 is slowest");

  while(input == 0){ // used to wait for the users input
  input = Serial.parseInt(); // records the users input
  }

  Serial.print("you input "); //informs the user of what they input
  Serial.println(input);

  rate = input * 100;// multiplies the value given by the user to set the rate of blink

  Serial.println("type no when you want to input a new value");// prompts the user on how to stop and put a new rate
  
  while(Serial.available() == 0 && repeat != "no"){ // repeats until the user types no
  digitalWrite(LED_BUILTIN, HIGH);
  delay(rate);// is the rate at which the led blinks
  digitalWrite(LED_BUILTIN, LOW);
  delay(rate);
  repeat = Serial.readString(); // for when the user types no to start a new rate
  }
  // restes the variable values 
  input = 0;
  rate = 0;
  repeat = "yes";
}
