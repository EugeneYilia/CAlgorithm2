#include <stdio.h>

int main() {
    int numbers[10];
    printf("请输入十个数字\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int tempNumber = numbers[j + 1];
                numbers[j + 1] = numbers[j];
                numbers[j] = tempNumber;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", numbers[i]);
    }
    return 0;
}