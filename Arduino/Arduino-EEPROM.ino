#include <EEPROM.h>

int led = 13;
int boton = 2;

int direccion = 0; //0 a 1023 en total son 1024 bytes que equivale a 1KB
int valor = 0;

boolean save = false;

void setup() {

  pinMode(led, OUTPUT);
  pinMode(boton, INPUT);

}

void loop() {

  EEPROM.get(direccion, save);
  digitalWrite(led, save);
  

  int estado = digitalRead(boton);

  if (estado == HIGH)
  {
    save = !save;
    EEPROM.update(direccion, save);
    delay(150);
  }

}
