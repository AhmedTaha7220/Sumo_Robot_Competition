double FRONT(void){
  digitalWrite(trigFront, LOW );
  delayMicroseconds(2);
  digitalWrite(trigFront, HIGH );
  delayMicroseconds(10);
  digitalWrite(trigFront, LOW);
  double duration = pulseIn(echoFront,HIGH);
  double distance = (duration/2) * 0.0343;
  delay(5);
  return distance;
}
 double LEFT(){
  digitalWrite(trigLeft, LOW );
  delayMicroseconds(2);
  digitalWrite(trigLeft, HIGH );
  delayMicroseconds(10);
  digitalWrite(trigLeft, LOW);
  double duration = pulseIn(echoLeft,HIGH);
  double distance = (duration/2) * 0.0343;
  delay(5);
  return distance;
}
double RIGHT(){
  digitalWrite(trigRight, LOW );
  delayMicroseconds(2);
  digitalWrite(trigRight, HIGH );
  delayMicroseconds(10);
  digitalWrite(trigRight, LOW);
  double duration = pulseIn(echoRight,HIGH);
  double distance = (duration/2) * 0.0343;
  delay(5);
  return distance;
}
char ultra (){
  double dfront=FRONT();
  double dright=RIGHT();
  double dleft=LEFT();
  if (dfront<=70) return 'f';
  else return 'f';
}
