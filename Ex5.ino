int OR = 3;
int AND = 4;
int XOR = 5;
int botao1 = 2;
int botao2 = 6;

void setup()
{
    Serial.begin(9600);
    pinMode(OR, OUTPUT);
    pinMode(AND, OUTPUT);
    pinMode(XOR, OUTPUT);
    pinMode(botao1, INPUT);
    pinMode(botao2, INPUT);
}

void loop()
{
    if (digitalRead(botao1) == 1 || digitalRead(botao2) == 1)
    {
        digitalWrite(OR, 1);
    }
    else
    {
        digitalWrite(OR, 0);
    }

    if (digitalRead(botao1) == 1 && digitalRead(botao2) == 1)
    {
        digitalWrite(AND, 1);
    }
    else
    {
        digitalWrite(AND, 0);
    }

    if (digitalRead(botao1) != digitalRead(botao2))
    {
        digitalWrite(XOR, 1);
    }
    else
    {
        digitalWrite(XOR, 0);
    }
}