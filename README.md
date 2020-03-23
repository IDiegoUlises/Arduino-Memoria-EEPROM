# Memoria Eprom Arduino

la memoria eprom es memoria permanente en el arduino es decir es una memoria voltatil porque cuando se apaga el microcontrolador se queda guardado los datos.

la memoria eprom solo puede ser editada 100.000 veces y luego dejara de funcionar puede parecer mucho pero si se hace un borrado infinitamente con programacion en 5 minutos se harian las 100,000 veces y dura 27 años si grabamos 10 veces al día.

la memoria eprom puede ser borrada con luz ultra violeta

la luz ultravioleta daña los ciclos de borrado de la memoria eprom

Esta memoria eprom para el borrado y para la escritura es de manera electrica. 

Realizar la lectura de la memoria EPROM no daña la memoria se pueden realizar lecturas infinita de la memoria sin producir ningun tipo de daño.

la memoria eprom en caso que no se conecte a la corriente en un tiempo de 10 a 20 años se borraran todos los datos permanentes se borran porque se descargara el condensador MOS.

Para que el condensador no se descargue este debe ser realimentado. 

Un transistor mosfet ademas de funcionar como un transistor tambien puede funcionar como un condensador porque este transistor mosfet internamente esta construida para que pueda almacenar un campo electrico y producir electricidad al mover los electrones, esto se utiliza en las memorias para guardar informacion a diferencia de un condensador normal el transistor mosfet puede funcionar como transistor y condensador la diferencia que su tamaño puede ser reducido a escala nanometrica para crear enormes memorias, cuando este transistor es utilizado para el proposito de condensador se denomina un condensador MOS.

La memoria eprom esta construida internamente con **transistores de puerta flotante(FGMOS)** que es un transistor que esta diseñado para retener una carga capacitiva es decir que tambien funciona como un condensador decenas de estos forman compuertas logicas para llegar a formar una **celda de memoria** que es un circuito que almacena los datos en binarios.

Datos de programacion

* Para la escritura de la EPROM se demora 3.3 ms en su escritura 

* Para la lectura de la EPROM es de 0.3ms para lectura

Todos los tipos de memoria que incorpora el arduino
* FLASH, no volátil, donde grabamos el sketch (incluido el bootloader).
* SRAM (static random access memory), volátil, donde se almacenan las variables durante el funcionamiento.
* EEPROM, no volátil, que podemos usar para almacenar información entre reinicios.

Memoria Eprom de Arduino Uno
* 1KB de memoria eprom

Memoria Eprom de Arduino Mega
* 4kb de memoria eprom
