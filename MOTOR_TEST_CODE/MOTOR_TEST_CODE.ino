//pinat
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        int m1_EL_Start_Stop = 6;
int m1_ZF_Direction = 7;
int m1_VR_speed = 9;

int pos = 0;
int steps = 50;  // Predefined number of steps
int speed1 =  255; // Predefined speed

void setup() {
  Serial.begin(115200);

  pinMode(m1_EL_Start_Stop, OUTPUT);
  pinMode(m1_ZF_Direction, OUTPUT);
}

void loop() {
  //  moveForward();

}

void moveForward() {
  analogWrite(m1_VR_speed, speed1);
  digitalWrite(m1_EL_Start_Stop, LOW);
  delay(1000);
  digitalWrite(m1_ZF_Direction, HIGH);
  delay(1000);
  digitalWrite(m1_EL_Start_Stop, HIGH);
}

void moveBackward() {
  analogWrite(m1_VR_speed, speed1);
  digitalWrite(m1_EL_Start_Stop, LOW);
  delay(1000);
  digitalWrite(m1_ZF_Direction, LOW);
  delay(1000);
  digitalWrite(m1_EL_Start_Stop, HIGH);
}
