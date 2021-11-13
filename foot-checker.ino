#define SENSOR 2 //defines input from sensor
#define ACTION 9 //defines output to indicator or transmitted signal
void setup() {
Serial.begin(9600);
pinMode(SENSOR, INPUT_PULLUP);
pinMode(ACTION, OUTPUT);
}
void loop() {
int M =digitalRead(SENSOR);
if(M == 0){
    Serial.println(" Clear legitimate bowling");
    digitalWrite(ACTION,HIGH);
}else{
Serial.println(" No ball at output time");
     digitalWrite(ACTION,LOW);
}
delay(20);
}
