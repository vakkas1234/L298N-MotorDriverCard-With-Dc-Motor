int hizyarisag=D10;
int hizyarisol=D11;
int sagileri = D14;
int saggeri = D15;
int solileri= D12;
int solgeri = D13;


void setup() {
   pinMode(sagileri,OUTPUT);
   pinMode(saggeri,OUTPUT);
   pinMode(solileri,OUTPUT);
   pinMode(solgeri,OUTPUT);
   pinMode(hizyarisol,OUTPUT);
   pinMode(hizyarisag,OUTPUT);
      
  (0,30000,8);
  ledcSetup(1,30000,8);
  ledcAttachPin(hizyarisag,0);
  ledcAttachPin(hizyarisol,1);
  }
            
void loop() {
  ledcWrite(0,200);
  ledcWrite(1,255);
    digitalWrite(sagileri,HIGH);
    digitalWrite(saggeri,LOW);
  digitalWrite(solileri,LOW);
  digitalWrite(solgeri,HIGH);
  delay(1000);
  }
