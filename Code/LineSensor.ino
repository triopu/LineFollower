//Line Sensor 1 (Kanan)
int kn = 2;

//Line Sensor 2 (Kiri)
int kr = 3;

void setup() { 
  pinMode(kn,INPUT);
  pinMode(kr,INPUT);
  Serial.begin(9600);
}

void loop() {  
  int kanan=digitalRead(kn);
  int kiri=digitalRead(kr);
  
  Serial.print("Kanan: ");
  Serial.print(kanan);
  Serial.print("\t");
  Serial.print("Kiri: ");
  Serial.println(kiri);
  delay(500);
}
