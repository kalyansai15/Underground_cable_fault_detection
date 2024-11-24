const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  // set pin mode for phase relays
  for (int j = 0; j < 3; j++) {
    pinMode(phase[j], OUTPUT);
  }

}

void loop() {
  digitalWrite(phase[0], LOW);
  delay(500);
  int dist1 = distance(analogRead(A0));
  if (dist1 == 0) {
    lcd.setCursor(0, 0);
    lcd.write("R: ");
    lcd.setCursor(3, 0);
    lcd.write("NF   ");
  }
  else {
    lcd.setCursor(0, 0);
    lcd.write("R: ");
    lcd.setCursor(3, 0);
    lcd.print(dist1);
    lcd.setCursor(4, 0);
    lcd.write(" KM");
  }
  digitalWrite(phase[0], HIGH);
  //================================================
  digitalWrite(phase[1], LOW);
  delay(500);
  int dist2 = distance(analogRead(A0));
  if (dist2 == 0) {
    lcd.setCursor(8, 0);
    lcd.write("Y: ");
    lcd.setCursor(11, 0);
    lcd.write("NF   ");
  }
  else {
    lcd.setCursor(8, 0);
    lcd.write("Y: ");
    lcd.setCursor(11, 0);
    lcd.print(dist2);
    lcd.setCursor(12, 0);
    lcd.write(" KM");
  }
  digitalWrite(phase[1], HIGH);
  //=================================================
  digitalWrite(phase[2], LOW);
  delay(500);
  int dist3 = distance(analogRead(A0));
  if (dist3 == 0) {
    lcd.setCursor(0, 1);
    lcd.write("G: ");
    lcd.setCursor(3, 1);
    lcd.write("NF   ");
  }
  else {
    lcd.setCursor(0, 1);
    lcd.write("G: ");
    lcd.setCursor(3, 1);
    lcd.print(dist3);
    lcd.setCursor(4, 1);
    lcd.write(" KM");
  }
  digitalWrite(phase[2], HIGH);
}

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  // set pin mode for phase relays
  for (int j = 0; j < 3; j++) {
    pinMode(phase[j], OUTPUT);
  }

}

void loop() {
  digitalWrite(phase[0], LOW);
  delay(500);
  int dist1 = distance(analogRead(A0));
  if (dist1 == 0) {
    lcd.setCursor(0, 0);
    lcd.write("R: ");
    lcd.setCursor(3, 0);
    lcd.write("NF   ");
  }
  else {
    lcd.setCursor(0, 0);
    lcd.write("R: ");
    lcd.setCursor(3, 0);
    lcd.print(dist1);
    lcd.setCursor(4, 0);
    lcd.write(" KM");
  }
  digitalWrite(phase[0], HIGH);
  //================================================
  digitalWrite(phase[1], LOW);
  delay(500);
  int dist2 = distance(analogRead(A0));
  if (dist2 == 0) {
    lcd.setCursor(8, 0);
    lcd.write("Y: ");
    lcd.setCursor(11, 0);
    lcd.write("NF   ");
  }
  else {
    lcd.setCursor(8, 0);
    lcd.write("Y: ");
    lcd.setCursor(11, 0);
    lcd.print(dist2);
    lcd.setCursor(12, 0);
    lcd.write(" KM");
  }
  digitalWrite(phase[1], HIGH);
  //=================================================
  digitalWrite(phase[2], LOW);
  delay(500);
  int dist3 = distance(analogRead(A0));
  if (dist3 == 0) {
    lcd.setCursor(0, 1);
    lcd.write("G: ");
    lcd.setCursor(3, 1);
    lcd.write("NF   ");
  }
  else {
    lcd.setCursor(0, 1);
    lcd.write("G: ");
    lcd.setCursor(3, 1);
    lcd.print(dist3);
    lcd.setCursor(4, 1);
    lcd.write(" KM");
  }
  digitalWrite(phase[2], HIGH);
}
