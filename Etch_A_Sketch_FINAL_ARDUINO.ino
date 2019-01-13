int motorPin1 = 8;
int motorPin2 = 9;
int motorPin3 = 10;
int motorPin4 = 11;

int motorPin21 = 4;
int motorPin22 = 5;
int motorPin23 = 6;
int motorPin24 = 7;



int val = 0;

void setup(){
  
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(motorPin21, OUTPUT);
    pinMode(motorPin22, OUTPUT);
      pinMode(motorPin23, OUTPUT);
        pinMode(motorPin24, OUTPUT);
  Serial.begin(9600);
}


                    //================ MOTOR COMBINATIONS ================\\

void loop(){
  val = Serial.read();
 //=================================================== LEFT + UP / CW1 + CCW2 ============== 
  if (val == 'A'){
        digitalWrite(motorPin4, HIGH);
        digitalWrite(motorPin21, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin3, HIGH);
      digitalWrite(motorPin22, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin4, LOW);
    digitalWrite(motorPin21, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin23, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin3, LOW);
   digitalWrite(motorPin22, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin1, HIGH);
      digitalWrite(motorPin24, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin2, LOW);
   digitalWrite(motorPin23, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin4, HIGH);
   digitalWrite(motorPin21, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin24, LOW);
  }
 
//========================================================= UP / CCW2 =======================  
    if (val == 'B'){
      digitalWrite(motorPin21, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin22, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin21, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin23, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin22, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin24, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin23, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin21, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin24, LOW);
  }
//======================================================= RIGHT + UP / CCW1 + CCW2 =============  
   if (val == 'C'){
     digitalWrite(motorPin21, HIGH);
     digitalWrite(motorPin1, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin22, HIGH);
   digitalWrite(motorPin2, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin21, LOW);
   digitalWrite(motorPin1, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin23, HIGH);
   digitalWrite(motorPin3, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin22, LOW);
   digitalWrite(motorPin2, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin24, HIGH);
   digitalWrite(motorPin4, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin23, LOW);
   digitalWrite(motorPin3, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin21, HIGH);
   digitalWrite(motorPin1, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin24, LOW);
   digitalWrite(motorPin4, LOW);
     
 } 

//========================================================= LEFT / CW1 =====================
 if (val =='D'){
   digitalWrite(motorPin4, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin3, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin4, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin2, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin3, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin1, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin2, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin4, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin1, LOW);
 } 
//======================================================== RIGHT / CCW2===================== 
if (val =='F'){
     digitalWrite(motorPin1, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin2, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin1, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin3, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin2, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin4, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin3, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin1, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin4, LOW);
 }
//========================================================= LEFT + DOWN  / CW1 + CW2 ==============
 if (val == 'G'){
 digitalWrite(motorPin4, HIGH);
 digitalWrite(motorPin24, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin3, HIGH);
   digitalWrite(motorPin23, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin4, LOW);
   digitalWrite(motorPin24, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin2, HIGH);
   digitalWrite(motorPin22, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin3, LOW);
   digitalWrite(motorPin23, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin21, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin2, LOW);
     digitalWrite(motorPin22, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin4, HIGH);
   digitalWrite(motorPin24, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin1, LOW);
   digitalWrite(motorPin21, LOW);
 }
 
//=========================================================== DOWN / CW2 ===================
 if (val == 'H'){
     digitalWrite(motorPin24, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin23, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin24, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin22, HIGH); 
   delayMicroseconds(1200);
   
   digitalWrite(motorPin23, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin21, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin22, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin24, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin21, LOW);
 }

//=========================================================== RIGHT + DOWN / CCW1 + CW2 ===========
 if (val == 'I'){
     digitalWrite(motorPin24, HIGH);
      digitalWrite(motorPin1, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin23, HIGH);
   digitalWrite(motorPin2, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin24, LOW);
   digitalWrite(motorPin1, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin22, HIGH); 
   digitalWrite(motorPin3, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin23, LOW);
      digitalWrite(motorPin2, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin21, HIGH);
   digitalWrite(motorPin4, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin22, LOW);
    digitalWrite(motorPin3, LOW);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin24, HIGH);   
   digitalWrite(motorPin1, HIGH);
   delayMicroseconds(1200);
   
   digitalWrite(motorPin21, LOW);
     digitalWrite(motorPin4, LOW);
 }

//============================================================= STOPS EVERYTHING ==========================
 if (val == 'a'){
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
     digitalWrite(motorPin21, LOW);
    digitalWrite(motorPin22, LOW);
    digitalWrite(motorPin23, LOW);
    digitalWrite(motorPin24, LOW);
  }


}
