
  // Blink

const byte gpio_led =33;      // declare a new constant 
void setup() {
  // initialize digital pin gpio_led as an output.
  pinMode(gpio_led, OUTPUT);
}

// the loop runs forever
void loop() {
  digitalWrite(gpio_led, HIGH);   // LED on 
  delay(500);                       // delay
  digitalWrite(gpio_led, LOW);    // LED off 
  delay(500);                       //delay
}
