const int pwr = A2;
const int gnd = A0;
const int pin = A1;

void setup() {
  pinMode(pwr, OUTPUT);
  pinMode(gnd, OUTPUT);
  pinMode(pin, INPUT);

  digitalWrite(gnd, LOW);
  digitalWrite(pwr, HIGH);

  Serial.begin(9600);
}

void loop() {
  int psi = .255*(analogRead(pin)) - 25.427; //experimental
  Serial.print(psi);
  Serial.print(" PSIG\n");
}
