int pot1 = 0;
int pot2 =0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pot1 = analogRead (A0);
  pot2 = analogRead (A2);

  // not required but nice to map
  int mappedPot1 = map(pot1 , 0, 1023, 0 ,255);
  int mappedPot2 = map(pot2 , 0, 1023, 0 ,255);


  Serial.print(mappedPot1);
  Serial.print(",");
  Serial.println(mappedPot2);

  

}
