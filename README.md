# Practica1

## Codi en línea
```cpp
#include <Arduino.h>

int led = 23;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);    
  Serial.begin(115200);  
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.println("ON"); 
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);  
  Serial.println("OFF");              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);               // wait for a second
}
```
## Explicació del codi
`1.Inclusió llibreries`
```cpp
#include <Arduino.h>
```
Aquí s'inclou la llibreria d'Arduino.h la qual ens permet utilitzar les funcions bàsiques del microcontrolador.

`2.Definició i declaració de variables`
```cpp
int led = 23;
```
Aquí es defineix un variable led de tipus enter assignant-li el valor 23. Això per assignar el pin 23 del ESP32 per controlar el led.

`3.Setup`
```cpp
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);    
  Serial.begin(115200);  
}
```
La funció setup es fa servir una vegada a l'inici del programa. Aquí es fan servir dues funcions, la primera és configurar el pin 23 com una sortida digital.
La segona és per inicialitzar la comunicació serial a una velocitat de 115200 bauds, cosa que permet enviar dades a l'ordinador.

`4.Loop`
```cpp
// the loop routine runs over and over again forever:
void loop() {
  Serial.println("ON"); 
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);  
  Serial.println("OFF");              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);               // wait for a second
}
```
El loop és una funció que s'executa infinitament en bucle, també és la acció principal del programa.

- **Serial.println("ON");:** Envía el missatge "ON" al monitor serial
- **digitalWrite(led, HIGH);:** Estableix el pin 23 en "HIGH", encenent el LED.
- **delay(1000);:** Espera durant 1000 milisegons (1 segon).
- **Serial.println("OFF");:** Envía el missatge "OFF" al monitor serial.
- **digitalWrite(led, LOW);:** Estableix el pin 23 en "LOW", apagant el LED.
- **delay(2000);:** Espera durant 2000 milisegons (2 segons).

## Flux d'execució 
1. Inici
2. Inicialitzar els pins de sortida
3. Loop
   - Encendre LED
   - Esperar 1 segon
   - Apagar LED
   - Esperar 2 segons
4. Repetició del Loop
