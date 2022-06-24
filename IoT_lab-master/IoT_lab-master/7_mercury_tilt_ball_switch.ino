void setup() 
{
    Serial.begin(9600);
    pinMode(3, INPUT);
}
void loop() 
{
    if (digitalRead(3) == 1)
    {
        Serial.println("Tilted");
    }
    else
    {
        Serial.println("Not tilted");
    }
    
    delay(1000);
}