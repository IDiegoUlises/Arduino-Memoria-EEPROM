# Memoria EEPROM Arduino

La memoria EEPROM esta construida internamente con **transistores de puerta flotante(FGMOS)** que es un transistor que retiene una carga capacitiva que funciona como un condensador decenas de estos forman compuertas logicas para llegar a formar una celda de memoria que es un circuito que almacena los datos en binarios, esta memoria en el caso que no es conectada a la corriente en un tiempo 15 años aproximado se borraran todos los datos porque se descargara el condensador para evitar esto debe ser realimentado electricamente.

* La EEPROM es un tipo de memoria donde los datos se guardan permanentemente
* Es una memoria no volatil porque los datos se guardan permanentemente
* El borrado de la memoria es atraves de corriente


**Limite de ediciones**
* Limite de borrado y escritura de 100.000 veces 
* Editada cada segundo tiene una duraccion de 5 minutos
* Editada 10 veces al dia tiene una duraccion de 27 años

**Lectura**
* Se pueden realizar lecturas ilimitadas porque que no detoriora la memoria

**Velocidad**
* Para la escritura de la EEPROM es de 3.3 ms en su escritura 
* Para la lectura de la EEPROM es de 0.3ms para lectura


**Tamaño de memoria EEPROM del Arduino Uno**
* 1KB de memoria

**Tamaño de memoria EEPROM del Arduino Mega**
* 4KB de memoria

**Memorias incorporada en el Arduino**
* FLASH: no volatil, donde grabamos el sketch (incluido el bootloader).
* SRAM: volatil, donde se almacenan las variables durante el funcionamiento
* EEPROM: no volatil, la podemos usar para guardar variables permanentes

## Codigo

Escribe un dato en la memoria EEPROM

```c++
EEPROM.Put(direccion, valor);
```

Lee una direccion y devuelve un valor
```c++
int obtener;
EEPROM.Get(direccion, obtener);
```

Lee y solo actualiza su valor si es distinto al guardado
```c++
EEPROM.Update(direccion, variable)
```

**Codigo**

```c++
#include <EEPROM.h>

int led = 13;
int boton = 2;

int direccion = 0;
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
``` 

## Funcionamiento

![](https://github.com/IDiegoUlises/Arduino-Memoria-EEPROM/blob/master/Images/Arduino-EEPROM.gif)

Se inicia el Arduino el led inicia apagado luego se presiona el boton y se prende el led luego se desconecta de la fuente de alimentacion ahora se vuelve encender el Arduino y el led inicia encendido esto sucede porque cuando se presiono el boton el Arduino guardo el estado en la memoria EEPROM. 
