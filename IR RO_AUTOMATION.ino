//*************** Science, DIY And Technology Presents ************** 
// ************** Smallest code for RO Automation Ever Coded *********
#include <Servo.h>

Servo tap_servo;

int sensor_pin = 2; // ir sensor pin attached
int tap_servo_pin =3;  //servo motor connected pin
int val;

void setup()
{
  pinMode(sensor_pin,INPUT);
  tap_servo.attach(tap_servo_pin);
  
 }

void loop()
{
  val = digitalRead(sensor_pin);

  if (val==0)
  {
    tap_servo.write(0);        // Choose  this an angle according to your servo placement and need of degree of turn in your 
  }
  if (val==1)
  {
    tap_servo.write(153);     // Choose  this an angle according to your servo placement and need of degree of turn in your 
  }

}
