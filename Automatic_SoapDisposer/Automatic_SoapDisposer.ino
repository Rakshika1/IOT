int in1 = 8;
int in2 = 9;
int in3 = 7;
void setup(){
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(7,INPUT);
}

void loop(){

  if(digitalRead(in3)==1){
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
  }
  else{
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
  }
}
