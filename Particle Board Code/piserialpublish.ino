//this is all we need to grab the data from the serial port and put it through the publisher
String content = "";
char character;

void setup() {
  Serial.begin(9600);   //this is the usb port at 9600
}

void loop() {

}

void serialEvent()  //built in callback from serial
{
  while (Serial.available()) {
      character = Serial.read();//reads character by character
      content.concat(character);//dumps into a string that'll deal with the variable size on the backend
  }
  Particle.publish("data", content, PRIVATE); //We are publishing all in one topic to save a few bytes
  content = "";
}