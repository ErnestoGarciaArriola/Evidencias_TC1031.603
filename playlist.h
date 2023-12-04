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
    std::string album;
    std::string releaseDate;
    int trackNumber;
    bool explicitContent;

    // Constructor para inicializar todos los campos
    Song(const std::string& t, const std::string& a, const std::string& al, const std::string& rd, int tn, bool ec)
        : title(t), artist(a), album(al), releaseDate(rd), trackNumber(tn), explicitContent(ec) {}
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

public:
    Playlist() : head(nullptr) {}

    // Inserta una nueva canción al principio de la lista
    void insertion(const Song& song) {
        Node* newNode = new Node(song);
        newNode->next = head;
        head = newNode;
    }

    // Muestra todas las canciones en la lista de reproducción
    void display() {
        Node* current = head;
        while (current) {
            std::cout << "Title: " << current->data.title << ", Artist: " << current->data.artist
                      << ", Album: " << current->data.album << ", Release Date: " << current->data.releaseDate
                      << ", Track Number: " << current->data.trackNumber << ", Explicit: " << current->data.explicitContent
                      << std::endl;
            current = current->next;
        }
    }

    // Carga las canciones desde un archivo CSV
    void loadFromCSV(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            std::string line;
            // Ignorar la primera línea, ya que contiene los encabezados
            std::getline(file, line);
            while (std::getline(file, line)) {
                std::stringstream ss(line);
                std::string trackName, artistNames, albumName, releaseDate;
                int trackNumber;
                bool explicitContent;

                ss >> trackName >> artistNames >> albumName >> releaseDate >> trackNumber >> explicitContent;

                // Crear una nueva canción y agregarla al principio de la lista
                Song song = {trackName, artistNames, albumName, releaseDate, trackNumber, explicitContent};
                insertion(song);
            }
            file.close();
        } else {
            std::cerr << "Unable to open file: " << filename << std::endl;
        }
    }

    // Guarda las canciones en el archivo CSV
    void saveToCSV(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            Node* current = head;
            while (current) {
                file << current->data.title << '\t' << current->data.artist << '\t' << current->data.album << '\t'
                     << current->data.releaseDate << '\t' << current->data.trackNumber << '\t'
                     << (current->data.explicitContent ? "true" : "false") << '\n';
                current = current->next;
            }
            file.close();
        } else {
            std::cerr << "Unable to open file: " << filename << std::endl;
        }
    }
};

#endif /* PLAYLIST_H_ */







