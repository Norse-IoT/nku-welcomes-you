const int teamNumber = 1;

const char* message = "Norse IoT and NKU's College of Informatics "
  "welcomes "
  "iLead Team %03d!\n";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.printf(message, teamNumber);
  delay(2000);
}
