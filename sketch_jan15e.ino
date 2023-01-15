#define trigPin 13
#define echoPin A0
unsigned duration, distance;
void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(12 , OUTPUT);
  pinMode(11 , OUTPUT);
  pinMode(10 , OUTPUT);
  pinMode(9 , OUTPUT);
  pinMode(8 , OUTPUT);
  pinMode(7 , OUTPUT);
  pinMode(6 , OUTPUT);
  pinMode(5 , OUTPUT);
  pinMode(4 , OUTPUT);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) * 0.0343;
  int metrdistance = distance / 100;
  float floatdistance = (duration / 2) * 343;
  Serial.println(floatdistance);
  switch(metrdistance){
  case(1):
    digitalWrite(12 ,0);
    digitalWrite(11 ,0);
    digitalWrite(10 ,0);
    digitalWrite(9 ,1);
    digitalWrite(8 ,1);
    digitalWrite(7 ,0);
    break;

    case(2):
    digitalWrite(12 ,1);
    digitalWrite(11 ,1);
    digitalWrite(10 ,1);
    digitalWrite(9 ,0);
    digitalWrite(8 ,1);
    digitalWrite(7 ,1);
    break;

    case(3):
    digitalWrite(12 , 1);
    digitalWrite(11 ,0);
    digitalWrite(10 ,1);
    digitalWrite(9 , 1);
    digitalWrite(8 ,1);
    digitalWrite(7 , 1);
    break;
  }
  

}
