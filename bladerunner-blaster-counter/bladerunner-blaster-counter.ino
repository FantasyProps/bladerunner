/*
  10-bar LED array
  
  Connect the LED array to pins 11-2 and through a 220R resistor to ground on the other side.
  01/14/2010
*/

void setup ()
{
  for (int loop = 2; loop < 12; loop++)
  {
    pinMode (loop, OUTPUT);    // Set the pin IO mode
    digitalWrite (loop, LOW);
  }
}

void loop ()
{
  // The loop has to start at 2 because 1 isn't an IO pin.
  // Go from right to left
  for (int loop = 2; loop < 12; loop++)
  {
    // Switch the LED on for 10 milliseconds
    digitalWrite (loop, HIGH);
    delay (50);
    //digitalWrite (loop, LOW);
    //delay (20);
  }
  
  // And from left to right again
  for (int loop = 11; loop > 1; loop--)
  {
    digitalWrite (loop, HIGH);
    delay (200);
    digitalWrite (loop, LOW);
    delay (300);
  }
}
