#define volt_pin A0    // pin recieving voltage from battery
#define baud_rate 9600 // baud rate for serial monitor

void setup() {
  Serial.begin(baud_rate);

}

void loop() {
  Serial.println(volt_pin);

}
