#include<Servo.h>
const int TriggerPin = 10;
const int EchoPin = 11;


const int startingAngle = 0;
const int minimumAngle = 0;
const int maximumAngle = 180;
const int rotationSpeed = 1;

int setinfopin=7;

void setup(void) 
{
    pinMode(TriggerPin, OUTPUT);
    pinMode(EchoPin, INPUT);
    Serial.begin(9600);
    digitalWrite(setinfopin,HIGH);
    
}
void loop(void)
{

//arr1();
}
    
    }
int CalculateDistance(void)
{
   
    digitalWrite(TriggerPin, HIGH);
    delay(100);
    digitalWrite(TriggerPin, LOW);
      long duration = pulseIn(EchoPin, HIGH);
    float distance = duration * 0.017F;
    return int(distance);
}
void SerialOutput(const int angle, const int distance)
{
    String angleString = String(angle);
    String distanceString = String(distance);
}
void arr1()
{
  
  int array1[180] = {};
  int array2[180] = {};
  int count = 0;
  for (int i=0; i<=180; i++){
  Serial.println(CalculateDistance());
  array1[i] = CalculateDistance();
  delay(200);
  }

  for (int i=180; i>=0; i--){
  Serial.println(CalculateDistance());
  array2[i] = CalculateDistance();
  delay(200);
  } 

  for (int i = 0; i<=180; i=i+1){
if (array1[i] == array2[i]){
    Serial.print ("element ");  Serial.print (i); Serial.println (" matches");
    }
else {
    Serial.print ("element ");  Serial.print (i); Serial.println (" does not match");
    count++;
    }
}
