//Motor Kiri
int ENA = 11;
int IN1 = 10;
int IN2 = 9;

//Motor Kanan
int IN3 = 7;
int IN4 = 6;
int ENB = 5;

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
}

void loop() {
  maju(255,255);
}

//Fungsi untuk menggerakkan motor
void maju(int pwmKR, int pwmKN){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, pwmKR);
  
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, pwmKN);
}
