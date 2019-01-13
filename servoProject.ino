
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40);
Adafruit_PWMServoDriver pwm1 = Adafruit_PWMServoDriver(0x41);
Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x42);

int servoMin = 115; // this is the 'minimum' pulse length count (out of 4096)
int servoMax = 170; // this is the 'maximum' pulse length count (out of 4096)

int ifRead1;
int ifRead2;

int servos1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
int servos2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
int servos3[] = {0, 1, 2};

int incomingByte = 0;

void setup() {
  Serial.begin(9600);

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  
  pwm.begin();
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates

  pwm1.begin();
  pwm1.setPWMFreq(60);

  pwm2.begin();
  pwm2.setPWMFreq(60);
}

void loop() {

ifRead1 = analogRead(A0);
ifRead2 = analogRead(A1);
Serial.println(ifRead2);

if (ifRead1 < 200){
  botRightAnimation();
}
//if (ifRead2 < 40){
//  botLeftAnimation();
//}

//if (Serial.available() > 0) {
//     // read the incoming byte:
//     incomingByte = Serial.read();
//     Serial.println(incomingByte);
//     if (incomingByte == 49){
//        botRightAnimation();
//     }
//     if (incomingByte == 50){
//        for (int i = 0; i < sizeof(servos2); i++){
//            for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
//                pwm1.setPWM(i, 0, pulselen);
//              }
//              delay(50);
//              for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
//                pwm1.setPWM(i, 0, pulselen);
//              }
//              delay(50);
//            }
//     }
//     if (incomingByte == 51){
//      for (int i = 0; i < sizeof(servos3); i++){
//            for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
//                pwm2.setPWM(i, 0, pulselen);
//              }
//              delay(50);
//              for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
//                pwm2.setPWM(i, 0, pulselen);
//              }
//              delay(50);
//            }
//     }
//                
//}
  
//for (int i = 0; i < sizeof(servos); i++){
//    for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
//        pwm.setPWM(i, 0, pulselen);
//      }
//      delay(50);
//      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
//        pwm.setPWM(i, 0, pulselen);
//      }
//      delay(50);
//    }
}

void botRightAnimation(){
  for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm.setPWM(0, 0, pulselen);
      }
      
      //next servo
      
      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm.setPWM(1, 0, pulselen);
        pwm.setPWM(3, 0, pulselen);
      }
      
      //next servo

      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm.setPWM(4, 0, pulselen);
        pwm.setPWM(5, 0, pulselen);
        pwm.setPWM(7, 0, pulselen);
        pwm.setPWM(8, 0, pulselen);
      }
      
      //next servo

      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm.setPWM(2, 0, pulselen);
        pwm.setPWM(6, 0, pulselen);
        pwm.setPWM(10, 0, pulselen);
      }
      
      //next servo

      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm.setPWM(9, 0, pulselen);
        pwm.setPWM(12, 0, pulselen);
        pwm.setPWM(14, 0, pulselen);
      }
      
      //next servo

      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm.setPWM(11, 0, pulselen);
      }
      
      //next servo

      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm.setPWM(13, 0, pulselen);
      }
      //next servo
      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm.setPWM(15, 0, pulselen);
      }
      //next servo

      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(0, 0, pulselen);
      }
      //next servo

      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(1, 0, pulselen);
      }
      //next servo

      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(2, 0, pulselen);
      }
      //next servo

      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(3, 0, pulselen);
        pwm1.setPWM(4, 0, pulselen);
      }
      //next servo
      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(6, 0, pulselen);
        pwm1.setPWM(12, 0, pulselen);
        pwm1.setPWM(5, 0, pulselen);
      }
      //next servo
      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(13, 0, pulselen);
        pwm1.setPWM(14, 0, pulselen);
      }
      //next servo
      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(7, 0, pulselen);
        pwm1.setPWM(15, 0, pulselen);
      }
      //next servo
      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(8, 0, pulselen);
        pwm2.setPWM(2, 0, pulselen);
      }
      //next servo
      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(9, 0, pulselen);
      }
      //next servo
      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(10, 0, pulselen);
      }
      //next servo
      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(11, 0, pulselen);
      }
      //next servo
      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm2.setPWM(1, 0, pulselen);
      }
      //next servo
      for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm2.setPWM(0, 0, pulselen);
      }
      //next servo

      //RETURN TO ZERO
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm2.setPWM(0, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm2.setPWM(1, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(11, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(10, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(9, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(8, 0, pulselen);
        pwm1.setPWM(2, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(7, 0, pulselen);
        pwm1.setPWM(15, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(13, 0, pulselen);
        pwm1.setPWM(14, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(12, 0, pulselen);
        pwm1.setPWM(6, 0, pulselen);
        pwm1.setPWM(5, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(3, 0, pulselen);
        pwm1.setPWM(4, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(2, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(1, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(0, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm.setPWM(15, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm.setPWM(13, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm.setPWM(11, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm.setPWM(9, 0, pulselen);
        pwm.setPWM(12, 0, pulselen);
        pwm.setPWM(14, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm.setPWM(2, 0, pulselen);
        pwm.setPWM(6, 0, pulselen);
        pwm.setPWM(10, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm.setPWM(4, 0, pulselen);
        pwm.setPWM(5, 0, pulselen);
        pwm.setPWM(7, 0, pulselen);
        pwm.setPWM(8, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm.setPWM(3, 0, pulselen);
      }
      for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm.setPWM(0, 0, pulselen);
      }


  
}

void botLeftAnimation(){
  for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(2, 0, pulselen);
      }
  //next servo
  for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(1, 0, pulselen);
        pwm1.setPWM(3, 0, pulselen);
        pwm1.setPWM(4, 0, pulselen);
      }
  //next servo
  for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(6, 0, pulselen);
        pwm1.setPWM(12, 0, pulselen);
        pwm1.setPWM(5, 0, pulselen);
      }
  //next servo
  for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(0, 0, pulselen);
        pwm1.setPWM(13, 0, pulselen);
        pwm1.setPWM(14, 0, pulselen);
      }
  //next servo
  for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(7, 0, pulselen);
        pwm1.setPWM(15, 0, pulselen);
        pwm.setPWM(15, 0, pulselen);
      }
  //next servo
  for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm.setPWM(11, 0, pulselen);
        pwm.setPWM(12, 0, pulselen);
        pwm1.setPWM(9, 0, pulselen);
      }
  //next servo
  for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(10, 0, pulselen);
        pwm.setPWM(9, 0, pulselen);
        pwm.setPWM(10, 0, pulselen);
      }
  //next servo
  for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm1.setPWM(11, 0, pulselen);
        pwm.setPWM(5, 0, pulselen);
        pwm.setPWM(2, 0, pulselen);
      }
  //next servo
  for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm2.setPWM(1, 0, pulselen);
        pwm.setPWM(1, 0, pulselen);
        pwm.setPWM(8, 0, pulselen);
      }
  //next servo
  for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm2.setPWM(0, 0, pulselen);
        pwm.setPWM(4, 0, pulselen);
        pwm.setPWM(0, 0, pulselen);
      }
  //next servo
  for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm.setPWM(7, 0, pulselen);
        pwm.setPWM(3, 0, pulselen);
        pwm.setPWM(14, 0, pulselen);
      }
  //next servo
  for (int pulselen = servoMin; pulselen < servoMax; pulselen++) {
        pwm2.setPWM(6, 0, pulselen);
      }
  //next servo

  //RETURN TO ZERO
  for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm2.setPWM(6, 0, pulselen);
      }
  for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm.setPWM(7, 0, pulselen);
        pwm.setPWM(3, 0, pulselen);
        pwm.setPWM(14, 0, pulselen);
      }
  for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm2.setPWM(0, 0, pulselen);
        pwm.setPWM(4, 0, pulselen);
        pwm.setPWM(0, 0, pulselen);
      }
  for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm2.setPWM(1, 0, pulselen);
        pwm.setPWM(1, 0, pulselen);
        pwm.setPWM(8, 0, pulselen);
      }    
  for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(11, 0, pulselen);
        pwm.setPWM(5, 0, pulselen);
        pwm.setPWM(2, 0, pulselen);
      }
  for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(10, 0, pulselen);
        pwm.setPWM(9, 0, pulselen);
        pwm.setPWM(10, 0, pulselen);
      }
  for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm.setPWM(11, 0, pulselen);
        pwm.setPWM(12, 0, pulselen);
        pwm1.setPWM(9, 0, pulselen);
      }
  for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(7, 0, pulselen);
        pwm1.setPWM(15, 0, pulselen);
        pwm.setPWM(15, 0, pulselen);
      }
  for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(0, 0, pulselen);
        pwm1.setPWM(13, 0, pulselen);
        pwm1.setPWM(14, 0, pulselen);
      }
  for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(6, 0, pulselen);
        pwm1.setPWM(12, 0, pulselen);
        pwm1.setPWM(5, 0, pulselen);
      }
  for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(1, 0, pulselen);
        pwm1.setPWM(3, 0, pulselen);
        pwm1.setPWM(4, 0, pulselen);
      } 
  for (int pulselen = servoMax; pulselen > servoMin; pulselen--) {
        pwm1.setPWM(2, 0, pulselen);
      }    
}



// you can use this function if you'd like to set the pulse length in seconds
// e.g. setServoPulse(0, 0.001) is a ~1 millisecond pulse width. its not precise!
void setServoPulse(uint8_t n, double pulse) {
  double pulselength;
  
  pulselength = 1000000;   // 1,000,000 us per second
  pulselength /= 60;   // 60 Hz
  Serial.print(pulselength); Serial.println(" us per period"); 
  pulselength /= 4096;  // 12 bits of resolution
  Serial.print(pulselength); Serial.println(" us per bit"); 
  pulse *= 1000;
  pulse /= pulselength;
  Serial.println(pulse);
  pwm.setPWM(n, 0, pulse);
}
