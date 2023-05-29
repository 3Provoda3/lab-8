
#include <stdio.h>

int countUniqueElements(int *array, int n) {
    int count = 0;
    //Перебираємо елементи масиву
    for (int i = 0; i< n; i++) {
        int isUnique = 1;

        for (int j = 0; j < i; j++) {
            if (array[i] == array[j]) {
                isUnique = 0;
                break;
            }
        }
      if (isUnique) {
        count++;

    }
}
return count;
}
int main() {
    int n;
    int array[100];

    printf("Введіть розмір масиву (n): ");
    scanf("%d", &n);

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf ("%d", &array[i]);
    }
    int uniqueCount = countUniqueElements (array, n);

    if (uniqueCount == n && uniqueCount == 1) {
        printf("Всі елементи масиву одинакові .\n");
    } else {
        printf("Кількість різних елементів: %d\n", uniqueCount);
    }
    return 0;

}
