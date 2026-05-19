const int trig=12;
const int  echo=13;

long duration;
int distance;

void setup() {
  
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(trig,LOW);
delayMicroseconds(2);


digitalWrite(trig,HIGH);
delayMicroseconds(8);


digitalWrite(trig,LOW);


duration=pulseIn(echo,HIGH);

distance=(duration*0.034)/2;
Serial.println(distance);


}
