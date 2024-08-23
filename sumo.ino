// Line follower specification
int line1=3; //forward line follower white
//int line2=7; //right line follower gray
//int line3=8; //left line follower 
int line4=2; //back line follower
//variables to store reading of linefollower
int state1,state4;

// Ultrasonic specification
int trigFront=A5;//orange and yellow
int echoFront=A0;
int trigRight=4;//red & brown
int echoRight=7;
int trigLeft=9;
int echoLeft=8;

//Motor initalizations
int m1P=10; //left motor
int m1N=11; 
int speed1=6; 
int m2P=12; //right motor
int m2N=13;
int speed2=5;

char direct; //it's the variable used to store the direction from ultrasonic function then it will be sent to Motors function

void Motors(char);
char line_follower (int,int);
char ultra();

void setup() {
  Serial.begin(9600);
  //Ultrasonic
  pinMode(trigFront,OUTPUT);
  pinMode(echoFront,INPUT);
  pinMode(trigLeft,OUTPUT);
  pinMode(echoLeft,INPUT);
  pinMode(trigRight,OUTPUT);
  pinMode(echoRight,INPUT);
  //Linefollower
  pinMode(line1,INPUT);
//  pinMode(line2,INPUT);
//  pinMode(line3,INPUT);
  pinMode(line4,INPUT);
  //Motor
  pinMode(m1P,OUTPUT);
  pinMode(m1N,OUTPUT);
  pinMode(speed1,OUTPUT);
  pinMode(m2P,OUTPUT);
  pinMode(m2N,OUTPUT);
  pinMode(speed2,OUTPUT);
  //attachInterrupt(digitalPinToInterrupt(line1), line1_isr, FALLING);
//  attachInterrupt(digitalPinToInterrupt(line4), line4_isr, FALLING);

}

void loop() {
  //delay(5000);
  state1=digitalRead(line1);
  //state2=digitalRead(line2);
  //state3=digitalRead(line3);
  state4=digitalRead(line4);
  while (state1==1 && state4==1){
    direct = ultra();
    Motors(direct);
 //   digitalRead(line1);
    state1=digitalRead(line1);
    state4=digitalRead(line4);
  }
  line_follower(state1, state4);
  direct=ultra();
  Motors(direct);
}
