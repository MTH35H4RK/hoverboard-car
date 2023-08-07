int VR = 9;
int zf = 7;
int TSS = 3;
void setup() {
  Serial.begin(115200);
  pinMode(VR, OUTPUT);
  pinMode(zf, OUTPUT);
  pinMode(TSS, INPUT);
  digitalWrite(zf, 0); // The direction of a rotation:  1 - clockwise, 0 - anti clockwise
}

void loop() {
  int TSV= analogRead(TSS);
  
  delay(4);
}
