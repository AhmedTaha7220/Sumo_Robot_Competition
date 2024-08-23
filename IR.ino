//l1 forward line follower
//l2 right line follower
//l3 left line follower 
//l4 back line follower
//1 for white
//0 for black
void Motors(char);
char line_follower(int l1, int l4){
  if (l1==0) {//Forward linefollower
    Motors('L');
    delay(1000);
  }
  /*
  else if (l4==0){ // Backward linefollower
    Motors('t');
    delay(4000);
}*/
  /*else if (l2==0){// Right linefollower
    Motors('t');
    delay(4000);
  }*/
  else if (l4==0){// Left linefollower
    Motors('f');
   
  }}
