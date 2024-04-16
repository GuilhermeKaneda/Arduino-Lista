int botao = 6;
bool memoria = 0;
bool memoria2 = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(botao, INPUT);
}

void loop()
{
    while (true)
    {
        if (digitalRead(botao) == 1)
        {
            memoria2 = 1;
        }
        if (digitalRead(botao) == 0 && memoria2 == 1)
        {
            break;
        }
    }
  	memoria2 = 0;
    if (memoria == 0)
    {
        memoria = 1;
        digitalWrite(botao, 1);
        Serial.println("Ligado");
    }
    else if(memoria == 1)
    {
        memoria = 0;
        digitalWrite(botao, 0);
        Serial.println("Desligado");
    }
}
