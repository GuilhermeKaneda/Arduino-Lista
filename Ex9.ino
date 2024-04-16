int luz = A0;
int val;
int LED = 3;

void setup() {
    pinMode(luz, INPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop() {
	val = analogRead(luz);
    val = map(val, 0, 679, 0, 255);
    Serial.println(val);
    analogWrite(LED, val);
}