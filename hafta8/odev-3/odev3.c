#include <stdio.h>

#define TABLE_SIZE 10

void findDuplicates(int arr[], int size) {
    int hashTable[TABLE_SIZE] = {0}; // Hash tablosunu sıfırla

    printf("Tekrar eden elemanlar: ");

    for (int i = 0; i < size; i++) {
        int index = arr[i] % TABLE_SIZE; // Hash değerini elde et

        if (hashTable[index] == 0) {
            hashTable[index] = arr[i]; // Konum boşsa, elemanı ekle
        } else if (hashTable[index] == arr[i]) {
            printf("%d ", arr[i]); // Konum dolu ise, eleman tekrar eden bir elemandır
        }
    }

    printf("\n");
}

int main() {
    int numbers[] = {1, 2, 3, 4, 2, 5, 1, 6, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    findDuplicates(numbers, size);

    return 0;
}
