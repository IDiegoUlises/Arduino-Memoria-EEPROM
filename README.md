# Memoria Eprom Arduino

La memoria EPROM esta construida internamente con **transistores de puerta flotante(FGMOS)** que es un transistor que retiene una carga capacitiva que funciona como un condensador decenas de estos forman compuertas logicas para llegar a formar una celda de memoria que es un circuito que almacena los datos en binarios, esta memoria en caso que no es conectada a la corriente en un tiempo 15 años aproximado se borraran todos los datos porque se descargara el condensador para evitar esto debe ser realimentado electricamente.

* La EPROM es un tipo de memoria donde los datos se guardan permanentemente
* Es una memoria volatil porque los datos se guardan permanentemente
* El borrado de la memoria es atraves de corriente


**Limite de ediciones**
* Limite de borrado y escritura de 100.000 veces 
* Editada cada segundo tiene una duraccion de 5 minutos
* Editada 10 veces al dia tiene una duraccion de 27 años

**Lectura**
* Se pueden realizar lecturas ilimitadas porque que no detoriora la memoria

**Velocidad**
* Para la escritura de la EPROM es de 3.3 ms en su escritura 
* Para la lectura de la EPROM es de 0.3ms para lectura

**Luz UV** 
* La EPROM puede ser borrada con luz ultra violeta
* Puede borrase con rayos-x 
* El borrado por luz disminuye el limite de borrado

**Tamaño de memoria EPROM del Arduino Uno**
* 1KB de memoria eprom

**Tamaño de memoria Eprom del Arduino Mega**
* 4KB de memoria eprom

**Memorias incorporada en el arduino**
* FLASH: no volatil, donde grabamos el sketch (incluido el bootloader).
* SRAM: volatil, donde se almacenan las variables durante el funcionamiento
* EEPROM: no volatil, la podemos usar para guardar variables permanentes

