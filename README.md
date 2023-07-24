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
7. Observe the blinking LED: We will see the LED connected to pin 5 of the Arduino board start blinking on and off with a 1-second interval. The LED will turn on for 1 second and then turn off for 1 second, repeatedly.
- Tinkercad link : https://www.tinkercad.com/things/1m38TwJUakd
- Screenshot ![img](https://github.com/LatifahAbuhamamah/Led-Blinking-And-Led-Matrix/blob/main/Led-Screenshot.png)
# Led matrix
To simulate a 5x5 LED matrix blinking in Tinkercad, follow these steps:
1. Open Tinkercad.
2. Create a new circuit: Click on "Create New Circuit" to start a new project.
3. Add components: In the Components panel, search for "Arduino" and drag the Arduino board into the work area. Then, search for "LED" and drag 25 LED components into the work area to form a 5x5 LED matrix.
4. Connect the LEDs to the Arduino: Connect one end of each LED to the corresponding digital pins (7, 6, 5, 4, 3) for columns and the other end of each LED to the corresponding digital pins (12, 11, 10, 9, 8) for rows. This will complete the circuit, allowing the LEDs to be controlled by the Arduino.
5. Upload the code: Click on the Arduino board to open the code editor. Write the following code:
```
//C++

void setup()
{
  // Set pin modes for columns (output)
  pinMode(7, OUTPUT); // Column 1
  pinMode(6, OUTPUT); // Column 2
  pinMode(5, OUTPUT); // Column 3
  pinMode(4, OUTPUT); // Column 4
  pinMode(3, OUTPUT); // Column 5

  // Set pin modes for rows (output)
  pinMode(12, OUTPUT); // Row 1
  pinMode(11, OUTPUT); // Row 2
  pinMode(10, OUTPUT); // Row 3
  pinMode(9, OUTPUT);  // Row 4
  pinMode(8, OUTPUT);  // Row 5
}

void loop()
{
  // Turn on the LED at column 1, row 1
  digitalWrite(7, HIGH);
  digitalWrite(12, HIGH);
  delay(500); // Wait for 500 milliseconds (0.5 seconds)

  // Turn off the LED at column 1, row 1
  digitalWrite(7, LOW);
  digitalWrite(12, LOW);
  delay(100); // Delay between LED changes

  // Turn on the LED at column 3, row 2
  digitalWrite(3, HIGH);
  digitalWrite(11, HIGH);
  delay(500);

  // Turn off the LED at column 2, row 2
  digitalWrite(6, LOW);
  digitalWrite(11, LOW);
  delay(100);

  // Turn on the LED at column 2, row 3
  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
  delay(500);

  // Turn off the LED at column 1, row 3
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  delay(100);

}
```
6. Run the simulation: Click the "Start Simulation" button to run the simulation.
7. Observe the blinking LED matrix: We will see the LEDs in the 5x5 matrix blink on and off based on the code's pattern. The LEDs will turn on and off according to the delays defined in the code.
- Tinkercad link : https://www.tinkercad.com/things/0ODC8LhVnDm
- Screenshot ![img](      )




