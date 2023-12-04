#include "playlist.h"

int main() {
    // Crear una instancia de la lista de reproducción
    Playlist playlist;

    // Cargar canciones desde un archivo CSV y realizar el ordenamiento Mergesort
    playlist.loadFromCSV("playlist.csv");
    // (Estimado: O(m + n log n), donde m es el número de filas en el archivo y n es el número de canciones)

    // Mostrar las canciones en la lista de reproducción
    std::cout << "Playlist:\n";
    playlist.display();
    // (Estimado: O(n) - lineal, donde n es el número de canciones en la lista)

    // Agregar una nueva canción
    Song newSong = {"New Song", "New Artist", "New Album", "New Release Date", 1, false};
    playlist.insertion(newSong);
    // (Estimado: O(1) - constante, ya que se agrega al principio de la lista)

    // Mostrar la lista de reproducción después de agregar la nueva canción
    std::cout << "\nPlaylist after insertion:\n";
    playlist.display();
    // (Estimado: O(n) - lineal, donde n es el número de canciones en la lista)

    // Guardar la lista de reproducción en un nuevo archivo CSV
    playlist.saveToCSV("playlist_output.csv");
    // (Estimado: O(n) - lineal, donde n es el número de canciones en la lista)

    return 0;
}

