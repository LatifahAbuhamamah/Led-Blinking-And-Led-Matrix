# Led-Blinking-With-Arduino
```

// C++ code
void setup()
{
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
```
This C++ code is an Arduino program that blinks an LED connected to pin 5 of the board. It uses the `setup()` function to set up pin 5 as an output pin, and the `loop()` function repeatedly turns the LED ON for 1000 milliseconds and then OFF for another 1000 milliseconds, creating a blinking effect. The LED blinks in an infinite loop, giving the appearance of a blinking LED with a frequency of approximately 0.5 times per second (since each cycle takes 1000 milliseconds for both ON and OFF periods).

