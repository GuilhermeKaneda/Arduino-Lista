int pont = A0;
int val;

void setup() {
    pinMode(pont, INPUT);
}

void loop() {
	val = analogRead(pont);
    Serial.println(val);
}