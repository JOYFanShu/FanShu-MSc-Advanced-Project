/*PID controller system with Arduino.
 * http://srituhobby.com
 */
 
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>
#include <Servo.h>
#include <PID_v2.h>
Servo servo;

#define trig 4
#define echo 5

#define kp 60
#define ki 0
#define kd 0
#define BNO055_SAMPLERATE_DELAY_MS (100)

Adafruit_BNO055 bno = Adafruit_BNO055(-1, 0x28);
double priError = 0;
double toError = 0;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  servo.attach(9);
  Serial.begin(9600);
  servo.write(50);
  
  Serial.println("Orientation Sensor Raw Data Test"); Serial.println("");

  /* Initialise the sensor */
  if(!bno.begin())
  {
    /* There was a problem detecting the BNO055 ... check your connections */
    Serial.print("Ooops, no BNO055 detected ... Check your wiring or I2C ADDR!");
    while(1);
  }

  delay(1000);

  /* Display the current temperature */
  int8_t temp = bno.getTemp();
  Serial.print("Current Temperature: ");
  Serial.print(temp);
  Serial.println(" C");
  Serial.println("");

  bno.setExtCrystalUse(true);

  Serial.println("Calibration status values: 0=uncalibrated, 3=fully calibrated");

}
void loop() {
  PID();
  //  int a = distance();
  //  Serial.println(a);
}

long distance () {
  digitalWrite(trig, LOW);
  delayMicroseconds(4);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long t = pulseIn(echo, HIGH);
  long cm = t / 29 / 2;
  return cm;
}

void PID() {
  int dis = distance();


  int setP = 15;
  double error = setP - dis;


  double Pvalue = error * kp;
  double Ivalue = toError * ki;
  double Dvalue = (error - priError) * kd;

  double PIDvalue = Pvalue + Ivalue + Dvalue;
  priError = error;
  toError += error;
 
  int Fvalue = (int)PIDvalue;


  Fvalue = map(Fvalue, -160, 160, 160, 0);


  if (Fvalue < 0) {
    Fvalue = 0;
  }
  if (Fvalue > 160) {
    Fvalue = 160;
  }

  servo.write(Fvalue);

  imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);

  /* Display the floating point data */
  Serial.print("Y:");
  Serial.print(euler.y());
  Serial.println("");
  delay(BNO055_SAMPLERATE_DELAY_MS);
}
