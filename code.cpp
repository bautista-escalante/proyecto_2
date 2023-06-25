// C++ code
#define constitucion 4
#define san_juan 3
#define independencia 2
#define moreno 13
#define A 7
#define B 6
#define C 12
#define D 11
#define E 10
#define F 8
#define G 9
#define buzzer 5 
#define PULSADOR A0
void EncenderLed();
void Apagar();
void EncenderBuzzer();
void setup()
{
  pinMode(constitucion, OUTPUT);
  pinMode(san_juan, OUTPUT);
  pinMode(independencia, OUTPUT);
  pinMode(moreno, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(PULSADOR,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int pepe = analogRead(PULSADOR);
  Serial.println(pepe);
  if (pepe == LOW)
  {
   EncenderLed();
  } 
}
void EncenderLed()
{
  digitalWrite(constitucion,HIGH); 
  EncenderDisplay(1);
  EncenderBuzzer();
  Apagar();
  digitalWrite(constitucion,LOW);
  
  digitalWrite(san_juan,HIGH);
  EncenderDisplay(2);
  EncenderBuzzer();
  Apagar();
  digitalWrite(san_juan,LOW);
  
  digitalWrite(independencia,HIGH);
  EncenderDisplay(3);
  EncenderBuzzer();
  Apagar();
  digitalWrite(independencia,LOW); 
  
  digitalWrite(moreno,HIGH);
  EncenderDisplay(4);
  EncenderBuzzer();
  Apagar();
  digitalWrite(moreno,LOW);
}
void EncenderDisplay(int num)
{
  switch (num)
  {
    case 0:
    	digitalWrite(A,HIGH);
     	digitalWrite(B,HIGH);
    	digitalWrite(C,HIGH);
     	digitalWrite(D,HIGH);
     	digitalWrite(E,HIGH);
     	digitalWrite(F,HIGH);
    	break;
    case 1:
        digitalWrite(B,HIGH);
        digitalWrite(C,HIGH);
    	break;
    case 2:
        digitalWrite(A,HIGH);
        digitalWrite(B,HIGH);
        digitalWrite(D,HIGH);
        digitalWrite(E,HIGH);
        digitalWrite(G,HIGH);
    	break;
    case 3:
        digitalWrite(A,HIGH);
        digitalWrite(B,HIGH);
        digitalWrite(C,HIGH);
        digitalWrite(D,HIGH);
        digitalWrite(G,HIGH);
    	break;
    case 4:
        digitalWrite(B,HIGH);
        digitalWrite(C,HIGH);
        digitalWrite(F,HIGH);
        digitalWrite(G,HIGH);
    	break;
  }
}
void EncenderBuzzer()
{ 
   tone(buzzer,600);
   delay(500);
   noTone(buzzer);
   delay(500);
}
void Apagar()
{
  digitalWrite(A ,LOW);  
  digitalWrite(B, LOW);
  digitalWrite(C,LOW);  
  digitalWrite(D, LOW);
  digitalWrite(E,LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}
