//Motor DC
int ENA = 11;
int IN1 = 10;
int IN2 = 9;
int IN3 = 8;
int IN4 = 7;
int ENB = 6;

//Line Sensor 1
int g1 = 0;
int v1 = 1;
int s1 = 2;

//Line Sensor 2
int g2 = 3;
int v2 = 4;
int s2 = 5;

int arrow =0;
void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  
  pinMode(g1,OUTPUT);
  pinMode(v1,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(v2,OUTPUT);
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);

  digitalWrite(g1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(v1, HIGH);
  digitalWrite(v2, HIGH);
}

void loop() {
  // pembacaan sensor pada pin 12 dan 13
  int lsensor=digitalRead(s1);
  int rsensor=digitalRead(s2);
  
  //logika robot menggunakan prinsip  AND
  if((lsensor == LOW)&&(rsensor== HIGH)){
    maju(255, 100);
  }
  
  if((lsensor== HIGH)&&(rsensor== LOW)){
    maju(100, 255);
    
  }
  
  if((lsensor==HIGH)&&(rsensor== HIGH)){
    maju(255, 255);
  }
  
  if((lsensor== LOW)&&(rsensor==LOW)){
    maju(100, 255);
  } 
}

//Fungsi untuk menggerakkan motor
void maju(int lpwm, int rpwm){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, lpwm);
  
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, rpwm);
}
