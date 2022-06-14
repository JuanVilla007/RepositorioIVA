// Declaracion de variables globales
float tempC; // Variable para almacenar el valor obtenido del sensor (0 a 1023)
int pinLM35 = 0; // Variable del pin de entrada del sensor (A0)
int pinSal = 7;
int pinEnt = 8;
int val;
 
void setup() {
  // Configuramos el puerto serial a 9600 bps
  Serial.begin(9600);
  
  pinMode(pinSal,OUTPUT);
  pinMode(pinEnt,INPUT);
}
 
void loop() {
  // Con analogRead leemos el sensor, recuerda que es un valor de 0 a 1023
  tempC = analogRead(pinLM35); 
   
  // Envia el dato al puerto serial
  Serial.println(tempC);

    val=digitalRead(pinEnt);
    if (val==HIGH){
      digitalWrite(pinSal,HIGH);
    }else {
      digitalWrite(pinSal,LOW);
    }
  
  // Esperamos un tiempo para repetir el loop
  delay(750);
  
}
