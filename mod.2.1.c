#include <stdio.h>

void inputArray(int a[], int n) {
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void outputArray(int a[], int n) {
    printf("Елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sortArray(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                // Обмін значень
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    float a[n];

    inputArray(a, n);
    sortArray(a, n);
    outputArray(a, n);

    return 0;
}