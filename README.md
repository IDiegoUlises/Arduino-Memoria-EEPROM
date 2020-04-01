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

## Code for testing good and bad the teoric 


//Escribe un dato en la memoria eprom
EEPROM.Put(address, variable) 

//Lee una variable en la dirección address que es un numero int que es de 0 a 1023 y devuelve el valor obtenido a una variable declarada 
EEPROM.Get(address, valor) 

EEPROM.Update(address, variable)
//Actualiza el valor de una variable, es decir, primero la lee, y sólo la graba si su valor es distinto del que vamos a guardar. Esto favorece a reducir el número de escrituras, y alargar la vida útil de la memoria.


Arduino uno tiene 1 kb eeprom es decir 0 a 1023 en total 1024 direcciones para guardar 1024 variables


para utilizar la eprom se debe llamar a la libreria #include <EEPROM.h>


el int direccion = 0; se puede poner desde el 0 a 1023 que en total son 1024 byes de direcciones

* Solo se pueden modifcar valores entero solo numeros y no se pueden agregar string en caso que necesite agregar una variable tipo string la tiene que convertila a binario y guardarla y para leerla leer en binario y traducirla a texto

## prueba con codigo

```c++
#include <EEPROM.h>

void setup() {

  Serial.begin(9600);
  int direccion = 0;
  int devolucion = 0;
  EEPROM.get(direccion,devolucion);
  Serial.println(devolucion);

}

void loop() {
  // put your main code here, to run repeatedly:

}
```

**Code de prueba para guardar datos**

```c++
#include <EEPROM.h>

int led = 13;
int boton = 2;

int direccion = 0;
int valor = 0;

void setup() {

  pinMode(led, OUTPUT);
  pinMode(boton, INPUT);

}

void loop() {

  EEPROM.get(direccion, valor);
  digitalWrite(led, valor);
  
  boolean cambio = valor;

  int estado = digitalRead(boton);

  if (estado == HIGH)
  {
    boolean guardar = !valor;
    EEPROM.update(direccion, guardar);
    delay(1000);
  }

  delay(80);

}
```


**Codigo que funciona para un boton**

```c++
int led = 13;
int boton = 2;

boolean save = 0;

void setup() {

  pinMode(led, OUTPUT);
  pinMode(boton, INPUT);

}

void loop() {


  int estado = digitalRead(boton);

  if (estado == HIGH)
  {
    save = !save;
    digitalWrite(led, save);
    delay(150);
    
  }

}
```

**Codigo que funciona**

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
´´´
