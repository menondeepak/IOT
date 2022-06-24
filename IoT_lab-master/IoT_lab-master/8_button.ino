
void setup() {
    Serial.begin(9600);
    pinMode(3, INPUT);
}
void loop() {
    if (digitalRead(3) == 1)
    {
        Serial.println("Not Pressed");
    }
    else
    {
        Serial.println("Pressed");
    }
    
    delay(1000);
}