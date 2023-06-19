#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int countElements(struct Node* head) {
    int count = 0; // Sayacı sıfırla
    struct Node* current = head; // Başlangıç düğümünü belirle

    while (current != NULL) {
        count++; // Sayacı bir artır
        current = current->next; // Bir sonraki düğüme geç
    }

    return count; // Eleman sayısını döndür
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Bağlı listeyi oluştur
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    int elementCount = countElements(head);
    printf("Bağlı listedeki eleman sayısı: %d\n", elementCount);

    return 0;
}
