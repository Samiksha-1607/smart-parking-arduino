// Smart Parking System using Arduino and IR Sensors

#define SLOT1_SENSOR 2
#define SLOT2_SENSOR 3
#define SLOT3_SENSOR 4

void setup() {
  Serial.begin(9600);

  pinMode(SLOT1_SENSOR, INPUT);
  pinMode(SLOT2_SENSOR, INPUT);
  pinMode(SLOT3_SENSOR, INPUT);

  Serial.println("Smart Parking System Started");
}

void loop() {
  int slot1 = digitalRead(SLOT1_SENSOR);
  int slot2 = digitalRead(SLOT2_SENSOR);
  int slot3 = digitalRead(SLOT3_SENSOR);

  Serial.println("----- Parking Status -----");

  if (slot1 == LOW)
    Serial.println("Slot 1: Occupied");
  else
    Serial.println("Slot 1: Available");

  if (slot2 == LOW)
    Serial.println("Slot 2: Occupied");
  else
    Serial.println("Slot 2: Available");

  if (slot3 == LOW)
    Serial.println("Slot 3: Occupied");
  else
    Serial.println("Slot 3: Available");

  delay(1000);
}
