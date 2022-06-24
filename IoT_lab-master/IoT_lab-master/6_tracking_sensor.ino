// Arduino and KY-033 module
void setup ()
{
    //pinMode - Configures the specified pin to behave either as an input or an output.
    pinMode(13, OUTPUT); // built-in LED pin set to output
    pinMode(8, INPUT); // module signal output connected to Arduino pin 8
    Serial.begin(9600); // initialize serial
}

void loop ()
{
    if (digitalRead(8) == HIGH) 
    {   // if module detects a dark surface,
        Serial.println("Dark Surface"); // show message on serial monitor and
        digitalWrite (13, HIGH); // switch-On built-in LED
    }
    else 
    {
        Serial.println("Light Surface");
        digitalWrite (13, LOW);
    }
}