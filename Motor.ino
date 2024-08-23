
 void Motors (char d){
  switch(d){
    case 'f': digitalWrite(m1P,1);
              digitalWrite(m1N,0);
              analogWrite(speed1,250);
              digitalWrite(m2P,1);
              digitalWrite(m2N,0);
              analogWrite(speed2,250);
              break;
    case 'r': digitalWrite(m1P,1);
              digitalWrite(m1N,0);
              analogWrite(speed1,250);
              digitalWrite(m2P,0);
              digitalWrite(m2N,0);
              analogWrite(speed2,0);
              Serial.println("right");
              break;                                 
    case 'l': digitalWrite(m1P,0);
              digitalWrite(m1N,0);
              analogWrite(speed1,0);
              digitalWrite(m2P,1);
              digitalWrite(m2N,0);
              analogWrite(speed1,250);
              Serial.println("left");
              break; 
    case 's':digitalWrite(m1P,0); //Stop
              digitalWrite(m1N,0);
              analogWrite(speed1,0);
              digitalWrite(m2P,0);
              digitalWrite(m2N,0);
              analogWrite(speed2,0);
              Serial.println("stop");
              break;                 
    case 'b': digitalWrite(m1P,0); //Back
              digitalWrite(m1N,1);
              analogWrite(speed1,250);
              digitalWrite(m2P,0);
              digitalWrite(m2N,1);
              analogWrite(speed2,250);
              break;    
    case 'L': digitalWrite(m1P,0); //Back left
              digitalWrite(m1N,1);
              analogWrite(speed1,250);
              digitalWrite(m2P,0);
              digitalWrite(m2N,1);
              analogWrite(speed2,30);
              break;
    case 'R': digitalWrite(m1P,0); //Back right
              digitalWrite(m1N,0);
              analogWrite(speed1,0);
              digitalWrite(m2P,0);
              digitalWrite(m2N,1);
              analogWrite(speed2,250);
              break;
    case 't': digitalWrite(m1P,0); //rotate in your place
              digitalWrite(m1N,1);
              analogWrite(speed1,255);
              digitalWrite(m2P,1);
              digitalWrite(m2N,0);
              analogWrite(speed2,255);
              break;                       
  }
 }
