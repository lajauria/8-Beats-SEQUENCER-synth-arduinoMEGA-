/*   _     ____       _  ____  _     ____  _  ____
   / \   /  _ \     / |/  _ \/ \ /\/  __\/ \/  _ \
   | |   | / \|     | || / \|| | |||  \/|| || / \|
   | |_/\| |-||  /\_| || |-||| \_/||    /| || |-||
   \____/\_/ \|  \____/\_/ \|\____/\_/\_\\_/\_/ \|

  SECUECIADOR con Arduino Mega 2017
  Creado por la Jauria


  Requiere de 8 potenciometros para generar una secuencia de 8 beats,
  cada BEAT es asignado segun la lectura de cada potenciometro

*/

int divisor = 4; // Divide la lectura analogica de 0 - 1023 / 0 - 256
int valorMinimo = 2;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);

}

void loop() {

  int sensorValue = (analogRead(A7) / divisor); // leer sensor, numero de pin divido entre 8
  int tempo = analogRead(A9); // tempo igual al numero de perilla del pin que lo va controlar
  if (sensorValue < valorMinimo) { // si el sensor es menos que 20 no va leer el tono
    noTone(13); // noTone igual al numero de pin del tempo
    analogWrite(3, (tempo / 4));
    analogWrite(3, sensorValue);
    delay(tempo); // delay igual a la funcion del tempo
  }
  else {
    tone(13, sensorValue);
    analogWrite(4, sensorValue);
    analogWrite(2, (tempo / 4));
    delay(tempo); // el mismo delay se pone tanto en NoTone como en Tone para que funcione al mismo tiempo
  }



  tempo = analogRead(A9);
  int sensorValue1 = (analogRead(A6) / divisor);
  if (sensorValue1 < valorMinimo) {
    noTone(13);
    analogWrite(5, sensorValue1);
    analogWrite(3, (tempo / 4));
    delay(tempo);
  }
  else {
    tone(13, sensorValue1);
    analogWrite(5, sensorValue1);
    analogWrite(3, (tempo / 8));
    delay(tempo);
  }




  tempo = analogRead(A9);
  int sensorValue3 = (analogRead(A5) / divisor);
  if (sensorValue3 < valorMinimo) {
    noTone(13);
    analogWrite(6, sensorValue3);
    analogWrite(3, (tempo / 4));
    delay(tempo);
  }
  else {
    tone(13, sensorValue3);
    analogWrite(6, sensorValue3);
    analogWrite(3, (tempo / 8));
    delay(tempo);
  }



  tempo = analogRead(A9);
  int sensorValue4 = (analogRead(A4) / divisor);
  if (sensorValue4 < valorMinimo) {
    noTone(13);
    analogWrite(7, sensorValue4);
    analogWrite(3, (tempo / 4));
    delay(tempo);
  }
  else {
    tone(13, sensorValue4);
    analogWrite(7, sensorValue4);
    analogWrite(3, (tempo / 8));
    delay(tempo);
  }



  tempo = analogRead(A9);
  int sensorValue5 = (analogRead(A3) / divisor);
  if (sensorValue5 < valorMinimo) {
    noTone(13);
    analogWrite(8, sensorValue5);
    analogWrite(3, (tempo / 4));
    delay(tempo);
  }
  else {
    tone(13, sensorValue5);
    analogWrite(8, sensorValue5);
    analogWrite(3, (tempo / 8));
    delay(tempo);
  }



  tempo = analogRead(A9);
  int sensorValue6 = (analogRead(A2) / divisor);
  if (sensorValue6 < valorMinimo) {
    noTone(13);
    analogWrite(9, sensorValue6);
    analogWrite(3, (tempo / 4));
    delay(tempo);
  }
  else {
    tone(13, sensorValue6);
    analogWrite(9, sensorValue6);
    analogWrite(3, (tempo / 8));
    delay(tempo);
  }



  tempo = analogRead(A9);
  int sensorValue7 = (analogRead(A1) / divisor);
  // print out the value you read:
  if (sensorValue7 < valorMinimo) {
    noTone(13);
    analogWrite(10, sensorValue7);
    analogWrite(3, (tempo / 4));
    delay(tempo);
  }
  else {
    tone(13, sensorValue7);
    analogWrite(10, sensorValue7);
    analogWrite(3, (tempo / 8));
    delay(tempo);
  }



  tempo = analogRead(A9);
  int sensorValue8 = (analogRead(A0) / divisor);
  // print out the value you read:
  if (sensorValue8 < valorMinimo) {
    noTone(13);
    analogWrite(11, sensorValue8);
    analogWrite(3, (tempo / 4));
    delay(tempo);
  }
  else {
    tone(13, sensorValue8);
    analogWrite(11, sensorValue8);

    analogWrite(3, (tempo / 8));
    delay(tempo);
  }
}




