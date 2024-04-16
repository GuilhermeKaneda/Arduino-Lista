int celsius = 0;

void setup() {
    pinMode(A0, INPUT);
  	Serial.begin(9600);
}

void loop() {
	celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
    Serial.println(celsius);
    delay(1000);
}