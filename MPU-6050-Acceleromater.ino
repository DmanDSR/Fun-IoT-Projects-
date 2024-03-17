
// Dylan Sedeno 11/06/2022
#include<Wire.h> // allows you to communicte with I2C devices

const int MPU_addr=0x68;  // I2C address of the MPU-6050. the address could be ox69 if ADO is high
int16_t accelX, accelY, accelZ;  // variables for accelerometer raw data

void setup(){
  //establish communication with MPU and register setup
  Wire.begin(); //intialize the I2C bus 
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x6B);  // PWR_MGMT_1 register - select the register and then write the value 
  Wire.write(0X00);     // set to zero (wakes up the MPU-6050) 
  Wire.endTransmission();
  Serial.begin(9600); //initialize the serial communication
}
void loop(){
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x3B);  // starting with register 0x3B (ACCEL_XOUT_H)
  Wire.endTransmission();
  Wire.requestFrom(MPU_addr,6);  // request a total of 6 registers

  accelX = Wire.read()<<8|Wire.read();  // reading registers 3B (ACCEL XOUT H) and 3C (ACCEL XOUT L)
  accelY = Wire.read()<<8|Wire.read();  // reading 3D (ACCEL YOUT H) and 3E (ACCEL YOUT L)
  accelZ = Wire.read()<<8|Wire.read();  // reading 3F (ACCEL ZOUT H) and 40 (ACCEL ZOUT L)

  //print out data
  Serial.print(" aX = "); Serial.print(accelX); //diaplays accelerometer X 
  Serial.print(" | aY = "); Serial.print(accelY); //diaplays accelerometer y 
  Serial.print(" | aZ = "); Serial.println(accelZ); //diaplays accelerometer z 
  
  delay(2000); // waits before doing new coordinates
}
