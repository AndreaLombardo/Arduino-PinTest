/*
 * Arduino PinTest v 1.0
 * Programmino per testare il funzionamento di tutti i pin dell'Arduino.
 * Sviluppato per Arduino Uno, pu essere adattato a qualsiasi altra scheda
 *
 * Non fa altro che far alternare lo stato HIGH LOW di ogni PIN, cosi da poter
 * testarne il funzionamento con un led
 *
 * Autore  : Andrea Lombardo
 * Web     : http://www.lombardoandrea.com
 * Git     : https://github.com/AndreaLombardo/Arduino-PinTest
 */ 

void setup() {
  
  for (int dpin = 0; dpin <= 13; dpin++) {
    pinMode(dpin, OUTPUT);
    digitalWrite(dpin, LOW);
  }

  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);

  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
  digitalWrite(A4, LOW);
  digitalWrite(A5, LOW);
}

void loop() {

  for (int dpin = 0; dpin <= 13; dpin++) {
    digitalWrite(dpin, HIGH);
    delay(10);
  }

  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);

  delay(500);

  for (int ddpin = 0; ddpin <= 13; ddpin++) {
    digitalWrite(ddpin, LOW);
    delay(10);
  }

  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
  digitalWrite(A4, LOW);
  digitalWrite(A5, LOW);


}

