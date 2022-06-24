int touchPin = A0;
int sensorValue = 0;

void setup () 
{
    Serial.begin(9600);
}

void loop () 
{
    sensorValue = analogRead(touchPin);
    // DEC - print as an ASCII-encoded decimal
    Serial.println(sensorValue, DEC);
    delay (1000);
}