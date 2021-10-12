
#define BUZZER 5
#define tc 1915
#define td 1700
#define te 1519
#define tf 1432
#define tg 1275
#define ta 1136
#define tb 1014
#define tC 956
//{tc, td, te, tf, tg, ta, tb, tC};
short octave[] = {1915, 1700, 1519, 1432, 1275, 1136, 1014, 956};
short freq[] {261, 277, 293, 311, 329, 349, 369, 392};

void playNote(int note){

  int duration = 100;
  while (duration--) {
    digitalWrite(BUZZER, HIGH);
    delayMicroseconds(octave[note]);
  
    digitalWrite(BUZZER, LOW);
    delayMicroseconds(octave[note]);
  }
  }
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(BUZZER ,OUTPUT);
}

void loop() {
  char ch;
  if (Serial.available()) {
    ch = Serial.read();
    switch (ch){
      case 'c' : playNote(0);;break;
      case 'd' : playNote(1);;break;
      case 'e' : playNote(2);;break;
      case 'f' : playNote(3);;break;
      case 'g' : playNote(4);;break;
      case 'a' : playNote(5);;break;
      case 'b' : playNote(6);;break;
      case 'C' : playNote(7);;break;
      case ' ' : delay(5);
    }
  }  } 
