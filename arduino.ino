#define volt_pin A0    // pin recieving voltage from battery
#define baud_rate 9600 // baud rate for serial monitor

const int time_delay = 1500;

void setup() {
  Serial.begin(baud_rate);

}

void loop() {
  Serial.println( analogRead(volt_pin) );

  delay(time_delay);
}
