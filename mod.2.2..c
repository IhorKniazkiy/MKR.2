#include <stdio.h>
void inputArraySize(int *n) {
    printf("Введіть кількість елементів масиву: ");
    scanf("%d", n);
}
void inputArray(int arr[], int n) {
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int n) {
    printf("Масив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n;
    inputArraySize(&n);
    int arr[n];
    inputArray(arr, n);
    sortArray(arr, n);
    outputArray(arr, n);
    return 0;
}
