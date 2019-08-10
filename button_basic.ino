int bu = 13;
int led = 12;
int but;

void setup() {
  // put your setup code here, to run once:

  //Serial.begin(9600);

  pinMode(bu,INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Serial.println("Hii");

  but = digitalRead(bu);

  if(but == 1){
    delay(500);
    digitalWrite(led,HIGH);
  }

  else{
    digitalWrite(led,0);
  }
  

}
