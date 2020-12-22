const int motor = A1;
int h = 255;
int l = 0;
String motion;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(motor, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Seilakan tekan : P = Putar , S = Stop");
while(Serial.available()==0) {}

motion = Serial.readString();
if(motion=="p"){
  analogWrite(motor, l);
}
if(motion=="s"){
  analogWrite(motor, h);
}
}
