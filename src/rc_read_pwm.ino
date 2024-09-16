int pwmPin = 2; // Input pin for PWM signal
unsigned long highDuration; // Stores the HIGH pulse duration
unsigned long lowDuration;  // Stores the LOW pulse duration
unsigned long period;       // Total period (HIGH + LOW)
float frequency;            // Frequency of the PWM signal
float dutyCycle;            // Duty cycle of the PWM signal

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud
  pinMode(pwmPin, INPUT);
}

void loop() {
  // Measure the duration of the HIGH and LOW pulses
  highDuration = pulseIn(pwmPin, HIGH);
  lowDuration = pulseIn(pwmPin, LOW);
  
  // Calculate the total period and frequency
  period = highDuration + lowDuration;
  if (period > 0) {
    frequency = 1000000.0 / period; // Frequency in Hz

    // Calculate duty cycle
    dutyCycle = (highDuration * 100.0) / period;
    
    // Display the data on the Serial Monitor
    Serial.print("High Duration: ");
    Serial.print(highDuration);
    Serial.print(" us, Low Duration: ");
    Serial.print(lowDuration);
    Serial.print(" us, Frequency: ");
    Serial.print(frequency);
    Serial.print(" Hz, Duty Cycle: ");
    Serial.print(dutyCycle);
    Serial.println(" %");
  }
  
  delay(500); // Delay for readability
}

