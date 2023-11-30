# Proyecto: Playlist de spotify
Escribe aquí un overview general de tu proyecto

## Instrucciones para compilar el proyecto
Ejecuta el siguiente comando en la terminal:

`g++ main.cpp -o proyecto` 

## Instrucciones para ejecutar el proyecto
Ejecuta el siguiente comando en la terminal:

`./proyecto` 

## Descripción de las entradas del avance de proyecto
Las entradas del proyecto son un archivo CSV que contiene información sobre las canciones, con columnas como "Track Name" y "Artist Name(s)". El programa carga esta información en una lista de reproducción

## Descripción de las salidas del avance de proyecto
 La salida principal del programa es la lista de reproducción y cualquier otra información relevante después de cargarlas desde el archivo CSV. .
 
## Desarrollo de competencias

### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.

El algoritmo de ordenamiento utilizado es Mergesort, que tiene una complejidad de tiempo de O(n log n). En el peor caso, esta complejidad se aplica al número de canciones en la lista de reproducción.

Listas enlazadas (Node y Playlist): La inserción de una nueva canción al final de la lista tiene una complejidad de O(n), donde n es el número de canciones en la lista, ya que se debe recorrer toda la lista para llegar al final. El método display, que muestra las canciones, también tiene una complejidad de O(n) ya que se debe visitar cada nodo una vez.

#### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.

Cargar las canciones desde el archivo CSV tiene una complejidad de O(m), donde m es el número de filas en el archivo.
Mostrar las canciones en la lista de reproducción tiene una complejidad de O(n), ya que se recorre la lista completa.
Realiza un ordenamiento Mergesort después de cargar las canciones la cual tiene una complejidad de O(n log n).


### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
El algoritmo Mergesort tiene una complejidad de tiempo de O(n log n). En este caso, n es el número de canciones en la lista de reproducción. La operación de inserción tiene una complejidad de O(n) para agregar una nueva canción al final de la lista.


#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.

Se utiliza una lista enlazada como estructura de datos para almacenar las canciones, lo cual es muy adecuado para las operaciones de inserción en el programa.

### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructras correctos.

el programa implementa mecanismos para consultar información de las estructuras mediante la función display() en la clase Playlist. Esta función recorre la lista enlazada e imprime la información de cada canción, permitiendo visualizar las canciones en la lista de reproducción.

#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
mi programa implementa mecanismos de lectura de archivos para cargar datos desde el archivo CSV mediante la función loadFromCSV() en la clase Playlist. Esta función lee el archivo línea por línea, extrae la información de cada canción y la agrega a la lista de reproducción utilizando la función de inserció

### Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta

En la función saveToCSV() en el código, se impkemento un mecanismo de escritura de archivos para guardar los datos de la lista de reproduccion en un formato CSV. Esta función recorre la lista de reproducción y escribe la información de cada canción en una línea del archivo CSV.
