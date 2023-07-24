# Led Blinking
Steps to simulate an LED blinking using an Arduino in Tinkercad:
1. Open Tinkercad.
2. Create a new circuit: Click on "Create New Circuit" to start a new project.
3. Add components: In the Components panel, search for "Arduino" and drag the Arduino board into the work area. Then, search for "LED" and drag an LED component into the work area as well.
4. Connect the LED to the Arduino: Connect one end of the LED to pin 5 of the Arduino board (digital pin) and the other end to the GND (ground) pin on the Arduino board. This completes the circuit, allowing the LED to be controlled by pin 5.
5. Upload the code: Click on the Arduino board to open the code editor. Write the following code that blinks the LED:
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
6. Run the simulation: Click the "Start Simulation" button to run the simulation.
- Tinkercad link : https://www.tinkercad.com/things/1m38TwJUakd-blinking-led/editel
8. Observe the blinking LED: We will see the LED connected to pin 5 of the Arduino board start blinking on and off with a 1-second interval. The LED will turn on for 1 second and then turn off for 1 second, repeatedly.



