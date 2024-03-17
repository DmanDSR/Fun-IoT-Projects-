//Dylan Sedeno 2022
//defines the pins i want to use
#define Red 6
#define Blue 5


void setup() {
  // put your setup code here, to run once:
  pinMode(Red, OUTPUT); //initializes digital pin defined for red as an output
  pinMode(Blue, OUTPUT);//initializes digital pin defined for blue as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Red, HIGH); // turn the LED on
  delay(2000);// wait for a 2 seconds
  digitalWrite(Red, LOW);// turn the LED off
  delay(1000);// wait for a second
  digitalWrite(Blue, HIGH);// turn the LED on
  delay(5000);// wait for a 5 seconds
  digitalWrite(Blue, LOW);// turn the LED off
  delay(1000);// wait for a second

}
