#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateArray(int *array, int n) {
    srand(time(NULL));

    for(int i = 0; i< n; i++) {
        array[i] = rand() % 201 -100;
    }  
}

void printArray(int *array, int n) {
    for (int  i = 0; i < n; i++) {

    }
    printf("\n");
}
int countGreaterThanFive(int * array, int n) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        if (array[i] > 5) {
            count ++;
        }
    }
    return count;
}
int sumAfterMax(int *array, int n) {
    int maxIndex = 0;
    int max = array[0];
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
            maxIndex = i;
        }
    }
    for (int i = maxIndex + 1; i < n ; i++) {
        sum += array[i];

    }
    return sum;
}
int main() {
    int n;
    int array[100];

    printf("Введіть розмір масиву (n): ");
    scanf("%d", &n);

    generateArray(array, n);

    printf("Згенерирований масив;\n");
    printArray(array, n);

    int count = countGreaterThanFive(array, n);
    printf("Кількість елементів масиву, більших за число п'ять: %d\n", count);

    int sum = sumAfterMax(array, n);
    printf("Сума елементів масивуб розташованих після максимального елемента: %d\n", sum);

    return 0;

}
