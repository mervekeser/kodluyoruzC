#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0]; // En büyük sayıyı saklamak için değişkeni başlangıç değeriyle ayarla

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // En büyük sayıyı güncelle
        }
    }

    return max; // En büyük sayıyı döndür
}

int main() {
    int numbers[] = {10, 5, 7, 3, 12, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int maxNumber = findMax(numbers, size);
    printf("En büyük sayı: %d\n", maxNumber);

    return 0;
}
