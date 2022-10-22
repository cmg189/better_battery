#define volt_pin A0    // pin recieving voltage from battery
#define baud_rate 9600 // baud rate for serial monitor

const int time_delay = 1500;
const float mv_per_count = 4.54;  // 4.65v / 1024 = 0.00454v

float num_counts = 0;
float mili_volts = 0;

void setup() {
  Serial.begin(baud_rate);

}

void loop() {
  num_counts = analogRead(volt_pin);

  mili_volts = num_counts * mv_per_count;

  Serial.println(mili_volts);

  delay(time_delay);
}
