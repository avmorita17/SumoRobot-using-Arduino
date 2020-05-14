// defines pins numbers
const int trigPin = 8;
const int echoPin = 9;
#define LM1 5 // left motor M1a
#define LM2 4 // left motor M2b
#define RM1 7 // right motor M2a
#define RM2 6 // right motor M2b
// defines variables
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(LM1, OUTPUT);
pinMode(LM2, OUTPUT);
pinMode(RM1, OUTPUT);
pinMode(RM2, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance = duration * 0.034/2;

if (distance <= 5 && distance >= 0) {
   digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW); 
    ; 
}
else {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW); 
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
}
}

