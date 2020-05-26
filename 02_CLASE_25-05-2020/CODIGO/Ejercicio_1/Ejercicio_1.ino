/*
  Titulo: Encender un Led
  Autor : Erik
  Materia : SML-300
*/
//Funcion Principal
void setup() {
  pinMode(13, OUTPUT);
}

//Funcion Ciclica
void loop() {
  //Enciende el LED, por 1s
  digitalWrite(13, HIGH);
  delay(1000);
  //Apagar el LED, por 1s
  digitalWrite(13, LOW);
  delay(1000);
}
