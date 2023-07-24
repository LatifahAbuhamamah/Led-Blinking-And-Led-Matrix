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
