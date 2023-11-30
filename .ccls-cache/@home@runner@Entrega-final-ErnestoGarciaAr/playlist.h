// playlist.h
#ifndef PLAYLIST_H_
#define PLAYLIST_H_

#include <iostream>
#include <fstream>
#include <sstream>

// Representa una canción en la lista de reproducción
struct Song {
    std::string title;
    std::string artist;
};

// Representa un nodo en la lista de reproducción
struct Node {
    Song data;
    Node* next;

    Node(const Song& song) : data(song), next(nullptr) {}
};

class Playlist {
private:
    Node* head;

    // Funciones privadas para el ordenamiento mergesort
    Node* merge(Node* left, Node* right);
    Node* mergeSort(Node* head);

public:
    Playlist() : head(nullptr) {}

    // Inserta una nueva canción en la lista
    void insertion(const Song& song) {
        Node* newNode = new Node(song);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Muestra todas las canciones en la lista de reproducción
    void display() {
        Node* current = head;
        while (current) {
            std::cout << "Title: " << current->data.title << ", Artist: " << current->data.artist << std::endl;
            current = current->next;
        }
    }

    // Carga las canciones desde un archivo CSV y realiza el ordenamiento
    void loadFromCSV(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            std::string line;
            while (std::getline(file, line)) {
                std::stringstream ss(line);
                std::string trackName, artistNames;

                // Suponiendo que el formato CSV es "Track Name" y "Artist Name(s)"
                std::getline(ss, trackName, '\t');  // Cambiado ',' a '\t' para adaptarse al formato
                std::getline(ss, artistNames, '\t');

                // Crear una nueva canción y agregarla a la lista
                Song song = {trackName, artistNames};
                insertion(song);
            }
            file.close();
        } else {
            std::cerr << "Unable to open file: " << filename << std::endl;
        }

        // Realiza el ordenamiento Mergesort después de cargar las canciones
        head = mergeSort(head);
    }

    // Guarda las canciones en el archivo CSV
    void saveToCSV(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            Node* current = head;
            while (current) {
                file << current->data.title << '\t' << current->data.artist << '\n';
                current = current->next;
            }
            file.close();
        } else {
            std::cerr << "Unable to open file: " << filename << std::endl;
        }
    }
};

#endif /* PLAYLIST_H_ */
