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


el int eeadress = 0; se puede poner desde el 0 a 1023 que en total son 1024 byes de direcciones

```c++
int eeaddress = 0;
int devolucion = 0;
EEPROM.get(eeAddress,devolucion);
serial.println(devolucion); //Obtiene el valor guardado en la eeprom
```
