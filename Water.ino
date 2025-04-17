/*!
 * @File  DFRobot_LevelSensor.ino
 * @brief  Detecting the liquid level of non-metallic containers,and check the status of sensor through serial port
 * @copyright  Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @licence  The MIT License (MIT)
 * @author  [liunian](nian.liu@dfrobot.com)
 * @version  V1.0
 * @date  2020-08-13
 */
int inPin = 8;
boolean running = 0;//when running=1, the liquid is detected, print out 1, otherwise, print out 0; running=0, the liquid is detected, print out 0, otherwise, print out 1.
int modePin = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(inPin, INPUT);
  pinMode(modePin, OUTPUT);
  digitalWrite(modePin, running);
}

void loop()
{
  Serial.println(digitalRead(inPin));
  delay(1000);
}
