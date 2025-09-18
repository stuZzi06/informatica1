#include <stdio.h>
#include <stdlib.h>

class Lista {
public:
    Lista() {
        head = NULL;
    }

    void add(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void print() {
        Node* current = head;
        while (current != NULL) {
            printf("%d ", current->value);
            current = current->next;
        }
        printf("\n");
    }

    void rimuoviInCoda() {
        if (head == NULL) return; // Lista vuota
        if (head->next == NULL) { // Solo un nodo
            delete head;
            head = NULL;
            return;
        }
        Node* current = head;
        while (current->next->next != NULL) {
            current = current->next;
        }
        delete current->next;
        current->next = NULL;
    }
    void rimuoviInTesta() {
        if (head == NULL) return; // Lista vuota
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void rimuoviInPosizione(int pos) {
        if (head == NULL || pos < 0) return; // Lista vuota o posizione non valida
        if (pos == 0) {
            rimuoviInTesta();
            return;
        }
        
        Node* current = head;
        for (int i = 0; i < pos - 1 && current != NULL; i++) {
            current = current->next;
        }
        if (current == NULL || current->next == NULL) return; // Posizione non valida
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    void rimuoviTutti() {
        while (head != NULL) {
            rimuoviInTesta();
        }
    }

    void rimuoviDuplicati() {
        Node* current = head;
        while (current != NULL) {
            Node* runner = current;
            while (runner->next != NULL) {
                if (runner->next->value == current->value) {
                    Node* temp = runner->next;
                    runner->next = runner->next->next;
                    delete temp;
                } else {
                    runner = runner->next;
                }
            }
            current = current->next;
        }
    }
    
    void rimuoviDuplicatiOrdinata() {
        Node* current = head;
        while (current != NULL && current->next != NULL) {
            if (current->value == current->next->value) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                current = current->next;
            }
        }
    }
    void rimuoviDuplicatiNonOrdinata() {
        Node* current = head;
        while (current != NULL) {
            Node* runner = current;
            while (runner->next != NULL) {
                if (runner->next->value == current->value) {
                    Node* temp = runner->next;
                    runner->next = runner->next->next;
                    delete temp;
                } else {
                    runner = runner->next;
                }
            }
            current = current->next;
        }
    }

    private:
    class Node {
    public:
        Node(int value) : value(value), next(NULL) {}
        int value;
        Node* next;
    };
    Node* head; 
};

int main() {
    Lista lista;
    lista.add(1);
    lista.add(2);
    lista.add(3);
    lista.print();
    return 0;
}