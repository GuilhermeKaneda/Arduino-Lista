int pont = A0;
int LED = 3;
int val;

void setup() {
    pinMode(pont, INPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop() {
	val = analogRead(pont);
    val = map(val, 0, 1023, 0, 255);
    Serial.println(val);
    analogWrite(LED, val);
}