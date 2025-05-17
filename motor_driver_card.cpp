#define ena D0
#define enb D1
#define in1 D4
#define in2 D9
#define in3 D13
#define in4 D14

void setup() {
    pinMode(ena,OUTPUT);
  pinMode(enb,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
   pinMode(in4,OUTPUT);
  
  }
            
void loop() {
    
  analogWrite(ena,255);
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  analogWrite(enb,255);
  digitalWrite(in3,0);
  digitalWrite(in4,1);
  delay(1000);
  
  }
