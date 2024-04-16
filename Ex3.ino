int vermelho = 3;
int verde = 4;
int amarelo = 5;
bool aux1 = 0, aux2 = 0, aux3 = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(vermelho, OUTPUT);
    pinMode(verde, OUTPUT);
    pinMode(amarelo, OUTPUT);
}

void loop()
{
    if (Serial.available() > 0)
    {
        String letter = Serial.readString();

        if (letter == "R" && aux1 == 0)
        {
            digitalWrite(vermelho, 1);
            aux1 = 1;
        } else if (letter == "R" && aux1 == 1) {
            digitalWrite(vermelho, 0);
            aux1 = 0;
        }

        if (letter == "G" && aux2 == 0)
        {
            digitalWrite(verde, 1);
            aux2 = 1;
        } else if (letter == "G" && aux2 == 1) {
            digitalWrite(verde, 0);
            aux2 = 0;
        }

        if (letter == "Y" && aux3 == 0)
        {
            digitalWrite(amarelo, 1);
            aux3 = 1;
        } else if (letter == "Y" && aux3 == 1) {
            digitalWrite(amarelo, 0);
            aux3 = 0;
        }
    }
}