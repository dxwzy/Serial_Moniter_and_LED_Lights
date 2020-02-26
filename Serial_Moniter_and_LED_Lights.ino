int blue = 7;
int red = 6;


void setup() {
  // put your setup code here, to run once:
Serial.begin(250000);
pinMode(blue,OUTPUT);
pinMode(red,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(blue,1);
digitalWrite(red,0);
Serial.println("Blue is glowing");
delay(1500);
digitalWrite(blue,0);
digitalWrite(red,1);
Serial.print("Red is glowing\n");
delay(1500);
}
