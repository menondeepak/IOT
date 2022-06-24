

int val;
int tempPin = 13;

void setup()
{
//  passes the value 9600 to the speed parameter. 
// This tells the Arduino to get ready to exchange messages with the Serial Monitor at a data rate of 9600 bits per second
    Serial.begin(9600);
}


void loop()
{
    // analogRead - Reads the value from the specified analog pin
    val = analogRead(tempPin);


    float mv= (val/1024.0) * 5000;
    float cel = mv/10;
    float farh = (cel*9)/5 + 32;

    Serial.print("TEMP= ");
    Serial.print(val);
    Serial.print("*C");
    Serial.println();
    
    //delay - Pauses the program for the amount of time (in milliseconds) specified as parameter
    delay(1000);
}