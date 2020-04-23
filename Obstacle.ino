int buzz = 12;
int LED = 4; // Use the onboard Uno LED
int isObstaclePin = 7;  // This is our input pin
int isObstacle = HIGH;  // HIGH MEANS NO OBSTACLE

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(isObstaclePin, INPUT);
  Serial.begin(9600);
  pinMode(buzz, OUTPUT);
}

void loop() {
  isObstacle = digitalRead(isObstaclePin);
  if (isObstacle == LOW)
  {
    Serial.println("OBSTACLE!!, OBSTACLE!!");
    digitalWrite(LED, LOW);
    digitalWrite(buzz, LOW);
  }
  else
  {
    Serial.println("clear");
    digitalWrite(LED, HIGH);
    digitalWrite(buzz, HIGH); 
  }
  delay(20);
}

