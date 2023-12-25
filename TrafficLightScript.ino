int inputNum1 = 2;
int inputNum2 = 3;
int inputNum3 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(inputNum1, OUTPUT);
  pinMode(inputNum2, OUTPUT);
  pinMode(inputNum3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(inputNum1, HIGH);
  delay(5000);
  digitalWrite(inputNum2, HIGH);
  delay(1500);
  digitalWrite(inputNum1, LOW);
  digitalWrite(inputNum2, LOW);
  digitalWrite(inputNum3, HIGH);
  delay(5000);
  digitalWrite(inputNum3, LOW);
  delay(500);
  digitalWrite(inputNum3, HIGH);
  delay(500);
  digitalWrite(inputNum3, LOW);
  delay(500);
  digitalWrite(inputNum3, HIGH);
  delay(500);
  digitalWrite(inputNum3, LOW);
  digitalWrite(inputNum2, HIGH);
  delay(2000);
  digitalWrite(inputNum2, LOW);
}
