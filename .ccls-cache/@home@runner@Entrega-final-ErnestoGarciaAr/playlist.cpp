#include "playlist.h"

// Función privada para realizar la fusión en el algoritmo de ordenamiento mergesort
Node* Playlist::merge(Node* left, Node* right) {
    Node* mergedHead = nullptr;  // Declarar mergedHead
    // Implementa la fusión de dos listas ordenadas
    // ...

    return mergedHead;
}

// Función privada para el ordenamiento mergesort
Node* Playlist::mergeSort(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Divide la lista en dos mitades
    // ...

    // Llama recursivamente a mergeSort en ambas mitades
    Node* leftSorted = mergeSort(left);
    Node* rightSorted = mergeSort(right);

    // Combina las dos listas ordenadas
    return merge(leftSorted, rightSorted);
}

// Implementa otras funciones privadas si es necesario

// Implementa el resto de las funciones públicas de la clase Playlist
