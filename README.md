# Memoria Eprom Arduino

La memoria EPROM esta construida internamente con **transistores de puerta flotante(FGMOS)** que es un transistor que retiene una carga capacitiva que funciona como un condensador decenas de estos forman compuertas logicas para llegar a formar una celda de memoria que es un circuito que almacena los datos en binarios.

* La EPROM es un tipo de memoria donde los datos se guardan permanentemente
* Es una memoria volatil porque los datos se guardan permanentemente
* El borrado de la memoria es atraves de corriente


**Limite de ediciones**
* Limite de borrado y escritura de 100.000 veces 
* editada cada segundo tiene una duraccion de 5 minutos
* editada 10 veces al dia tiene una duraccion de 27 años


**Luz UV** 
* La EPROM puede ser borrada con luz ultra violeta
* Puede borrase con rayos-x 
* El borrado por luz daña la memoria


Realizar la lectura de la memoria EPROM no daña la memoria se pueden realizar lecturas infinita de la memoria sin producir ningun tipo de daño.

la memoria eprom en caso que no se conecte a la corriente en un tiempo 15 años se borraran todos los datos permanentes se borranan porque se descargara el condensador y para evitar esto debe ser realimentado.



Datos de programacion

* Para la escritura de la EPROM se demora 3.3 ms en su escritura 

* Para la lectura de la EPROM es de 0.3ms para lectura

Todos los tipos de memoria que incorpora el arduino
* FLASH no volatil, donde grabamos el sketch (incluido el bootloader).
* SRAM volatil donde se almacenan las variables durante el funcionamiento.
* EEPROM  no volatil, que podemos usar para almacenar informacion permanente

Memoria Eprom de Arduino Uno
* 1KB de memoria eprom

Memoria Eprom de Arduino Mega
* 4KB de memoria eprom
