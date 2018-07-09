#include <stdio.h>

int main() {
    printf("请输入想要的数组的大小\n");
    int size;
    scanf("%d", &size);
    int numbers[size];
    printf("请输入%d个数字\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int tempNumber = numbers[j + 1];
                numbers[j + 1] = numbers[j];
                numbers[j] = tempNumber;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }
    return 0;
}