void setup(){ //defineixo el pin nº13 com a sortida
 pinMode (13, OUTPUT); 
}
void loop() { //Creo un bucle infinit
  digitalWrite(13, HIGH); // Envia una senyal al LED d'engegar-se (HIGH) 
  delay(500);             // temps de 500 mS
  digitalWrite(13, LOW);  // Envia una senyal al LED d'apagar-se
  delay(500);             // Un temps més de 500mS
}  
