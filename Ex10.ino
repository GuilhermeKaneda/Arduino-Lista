int celsius = 0, range = 50;
const int BUZZ = 2;
bool aux = 0;

void setup()
{
    pinMode(A0, INPUT);
    pinMode(BUZZ, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
    Serial.println(celsius);

    if (celsius >= range)
    {
        tone(BUZZ, 100, 50);
    }
}