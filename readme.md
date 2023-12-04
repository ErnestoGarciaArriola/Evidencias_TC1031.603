# Proyecto: Nombre de tu proyecto
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

Mergesort vs Selection Sort y Bubblesort:

Mergesort se eligió sobre Selection Sort y Bubblesort por varias razones. En términos de eficiencia en el peor caso, Mergesort tiene una complejidad temporal de O(n log n), lo que significa que su rendimiento no se degrada significativamente incluso en situaciones desfavorables. En comparación, tanto Selection Sort como Bubblesort tienen complejidades de O(n^2) en el peor caso, lo que puede resultar ineficiente para conjuntos de datos más grandes.

En conjuntos de datos grandes, Mergesort mantiene su eficiencia con una complejidad de O(n log n), lo que lo hace más adecuado para listas de reproducción extensas. En cambio, Selection Sort y Bubblesort sufren con complejidades cuadráticas, lo que impacta negativamente su rendimiento cuando el tamaño del conjunto de datos aumenta.

El rendimiento promedio también favorece a Mergesort, ya que su complejidad promedio es O(n log n), proporcionando un comportamiento más consistente y predecible. Por otro lado, Selection Sort y Bubblesort tienen complejidades promedio de O(n^2), lo que puede resultar en un rendimiento menos predecible.

Mergesort vs Búsqueda Secuencial:

En cuanto a la búsqueda de elementos en la lista, Mergesort no se compara directamente con la Búsqueda Secuencial, ya que tienen propósitos diferentes. Mergesort se centra en ordenar la lista de reproducción para facilitar operaciones posteriores, mientras que la Búsqueda Secuencial se utiliza para encontrar elementos específicos en una lista no ordenada.

Mergesort vs Búsqueda Binaria:

Mergesort se elige también en consideración a la Búsqueda Binaria. La eficiencia de la Búsqueda Binaria depende de que la lista esté ordenada, y Mergesort proporciona una manera eficiente de lograr esto. Al ordenar la lista antes de realizar operaciones de búsqueda, Mergesort contribuye a optimizar la eficiencia global del programa.



#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.

Uso de Lista Enlazada en lugar de otros métodos:

Ventajas de Lista Enlazada:

Inserción Eficiente: La Lista Enlazada ofrece una inserción eficiente en el caso general. Para la operación de inserción al final de la lista, que es común al cargar canciones desde un archivo CSV, la complejidad es O(1). Esto es beneficioso para la eficiencia del programa, especialmente cuando se trata de grandes cantidades de datos.

No es necesario especificar tamaño inicial: A diferencia de algunas estructuras de datos estáticas como los arreglos, la Lista Enlazada no requiere que se especifique un tamaño inicial. Puede crecer dinámicamente según sea necesario, evitando limitaciones en la capacidad.

Eficiencia en Inserciones y Eliminaciones: Dado que las canciones en una lista de reproducción pueden agregarse o eliminarse en cualquier punto, las Listas Enlazadas son particularmente eficientes para estas operaciones, ya que no requieren desplazamiento de elementos como en un arreglo.

Flexibilidad y Dinamismo: La Lista Enlazada es una estructura de datos dinámica que proporciona flexibilidad en la manipulación de datos. Puede adaptarse fácilmente a cambios en la lista de reproducción sin la necesidad de redefinir el tamaño o realizar operaciones de movimiento intensivas.

Ordenamiento con Mergesort: La elección de Mergesort para el ordenamiento beneficia el uso de Listas Enlazadas. Mergesort es compatible con estructuras de datos enlazadas y no requiere acceso aleatorio, lo que se ajusta bien a las características de una Lista Enlazada.

Consideraciones sobre otras estructuras:

Arreglos Dinámicos (std::vector): Aunque los arreglos dinámicos ofrecen eficiencia en el acceso aleatorio, su capacidad de crecimiento podría llevar a la necesidad de realocar memoria, lo cual podría ser costoso en términos de tiempo. Además, las inserciones y eliminaciones en posiciones intermedias no son tan eficientes como en una Lista Enlazada.

Arreglos Estáticos: Los arreglos estáticos requieren un tamaño fijo y podrían no ser ideales para listas de reproducción de tamaño variable. Además, podrían enfrentar limitaciones de capacidad.

Árboles: Si bien las estructuras de árbol, como el Árbol Binario de Búsqueda, podrían ser eficientes para ciertas operaciones, su complejidad y requisitos de implementación podrían ser excesivos para las necesidades específicas de este proyecto.

Por qué no se eligió un Árbol Binario de Búsqueda (BST) para el proyecto?
Hay varias razones:

Complejidad de Implementación: Los árboles binarios de búsqueda, mientras son eficientes para ciertas operaciones, tienen una complejidad de implementación más alta en comparación con las listas enlazadas. La necesidad de mantener el equilibrio del árbol (por ejemplo, mediante rotaciones) y garantizar que se cumplan las propiedades de búsqueda puede aumentar la complejidad del código.

Operaciones Costosas en Pequeñas Listas: Para listas de reproducción relativamente pequeñas, las operaciones de inserción y eliminación pueden ser más costosas en un BST que en una lista enlazada. La complejidad de estas operaciones puede aumentar si se deben realizar rotaciones para mantener la estructura de búsqueda.

Flexibilidad Limitada: La estructura de un árbol binario de búsqueda está determinada por el orden de inserción, lo que podría no adaptarse bien a la naturaleza dinámica de una lista de reproducción. Cambios frecuentes en la lista, como la inserción y eliminación de canciones, podrían requerir reorganizaciones significativas en el árbol.

Complejidad Espacial Mayor: Los árboles binarios de búsqueda tienden a ocupar más espacio en memoria que las listas enlazadas, especialmente cuando se debe mantener el equilibrio. Para un proyecto con el objetivo principal de gestionar listas de reproducción, la eficiencia en el uso de la memoria es un factor a considerar.

### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructras correctos.

el programa implementa mecanismos para consultar información de las estructuras mediante la función display() en la clase Playlist. Esta función recorre la lista enlazada e imprime la información de cada canción, permitiendo visualizar las canciones en la lista de reproducción.

#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
mi programa implementa mecanismos de lectura de archivos para cargar datos desde el archivo CSV mediante la función loadFromCSV() en la clase Playlist. Esta función lee el archivo línea por línea, extrae la información de cada canción y la agrega a la lista de reproducción utilizando la función de inserció

### Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta

En la función saveToCSV() en el código, se impkemento un mecanismo de escritura de archivos para guardar los datos de la lista de reproduccion en un formato CSV. Esta función recorre la lista de reproducción y escribe la información de cada canción en una línea del archivo CSV.
