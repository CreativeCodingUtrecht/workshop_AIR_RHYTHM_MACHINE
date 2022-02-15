//Assigning physical pins to variables
int ledPin1 = 1;
int ledPin2 = 2;
int ledPin3 = 3;
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;
int ledPin8 = 8;
int ledPin9 = 9;
int ledPin10 = 10;

//Handler function for MIDI NOTE ON event
void OnNoteOn(byte channel, byte note, byte velocity) {
  switch(note){
    case 48: digitalWrite(ledPin1, HIGH); break;//C2 note on to turn ledPin1 HIGH
    case 49: digitalWrite(ledPin2, HIGH); break;//C#2 note on to turn ledPin1 HIGH
    case 50: digitalWrite(ledPin3, HIGH); break;//D2 note on to turn ledPin1 HIGH
    case 51: digitalWrite(ledPin4, HIGH); break;//D#2 note on to turn ledPin1 HIGH
    case 52: digitalWrite(ledPin5, HIGH); break;//E2 note on to turn ledPin1 HIGH
    case 53: digitalWrite(ledPin6, HIGH); break;//F2 note on to turn ledPin1 HIGH
    case 54: digitalWrite(ledPin7, HIGH); break;//F#2 note on to turn ledPin1 HIGH
    case 55: digitalWrite(ledPin8, HIGH); break;//G2 note on to turn ledPin1 HIGH
    case 56: digitalWrite(ledPin9, HIGH); break;//G#2 note on to turn ledPin1 HIGH
    case 57: digitalWrite(ledPin10, HIGH); break;//A2 note on to turn ledPin1 HIGH
  }
  
}

//Handler function for MIDI NOTE OFF event
void OnNoteOff(byte channel, byte note, byte velocity) {
  switch(note){
    case 48:  digitalWrite(ledPin1 , LOW); break;//C2 note on to turn ledPin1 HIGH
    case 49:  digitalWrite(ledPin2 , LOW); break;//C#2 note on to turn ledPin1 HIGH
    case 50:  digitalWrite(ledPin3 , LOW); break;//D2 note on to turn ledPin1 HIGH
    case 51:  digitalWrite(ledPin4, LOW); break;//D#2 note on to turn ledPin1 HIGH
    case 52:  digitalWrite(ledPin5 , LOW); break;//E2 note on to turn ledPin1 HIGH
    case 53:  digitalWrite(ledPin6 , LOW); break;//F2 note on to turn ledPin1 HIGH
    case 54:  digitalWrite(ledPin7 , LOW); break;//F#2 note on to turn ledPin1 HIGH
    case 55:  digitalWrite(ledPin8 , LOW); break;//G2 note on to turn ledPin1 HIGH
    case 56:  digitalWrite(ledPin9 , LOW); break;//G#2 note on to turn ledPin1 HIGH
    case 57:  digitalWrite(ledPin10 , LOW); break;//A2 note on to turn ledPin1 HIGH
  }
}

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  
  usbMIDI.setHandleNoteOff(OnNoteOff);
  usbMIDI.setHandleNoteOn(OnNoteOn) ;
  for(int i = 1; i<=10;i++){
     digitalWrite(i, HIGH);
     delay(400);                 // Open  and close valves once at startup
     digitalWrite(i, LOW);
  }
 
}

void loop() {
  usbMIDI.read();
}
