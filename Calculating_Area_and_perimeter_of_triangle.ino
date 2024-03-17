//Dylan Sedeno

float area, height, base, side1 , side2, sum; //variables needed for program

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // baud rate for serial monitor 
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("This program is to calculate the Perimeter and Area of a Triangle."); //informs the user about program 
  Serial.println("To continue type a word and press enter.");

  while(Serial.available() == 0 || Serial.available() == 1 ){} // used to keep program from continueing 

  Serial.print("Input base: "); //prompts user for base
   while(base == 0){ // used to wait for the user to input value
  base = Serial.parseFloat(); //sets the variable to the users input
  }
  Serial.println(base); // prints the users input

  Serial.print("Input side 1: "); //prompts user for side 1
  while(side1 == 0){ // used to wait for the user to input value
  side1 = Serial.parseFloat();//sets the variable to the users input
  }
  Serial.println(side1);// prints the users input

  Serial.print("Input side 2: "); //prompts user for side 2
   while(side2 == 0){ // used to wait for the user to input value
  side2 = Serial.parseFloat();//sets the variable to the users input
  }
  Serial.println(side2);// prints the users input

  Serial.print("Input height: "); //prompts user for height
   while(height == 0){ // used to wait for the user to input value
  height = Serial.parseFloat();//sets the variable to the users input
  }
  Serial.println(height);// prints the users input

  area = base * height; // calculates the area of triangle
  sum = side1 + side2 + base; // calculates the perimeter of the triangle

  Serial.print("The Area of the triangle is: ");
  Serial.println(area); //outputs the results for the triangles area 
  Serial.print("The Perimeter is: ");
  Serial.println(sum); //outputs the results for the triangles Perimeter

  Serial.println("To input another triagle type a word and press Enter"); //to prompt the user if they want to input more
  while(Serial.available() == 0 ){} // waits until the user presses enter to continue the code

  //resets the varibles for new inputs
  sum = 0;
  height = 0;
  side1 = 0;
  side2 = 0;
  area = 0;
  sum = 0;
  base =0;
}
