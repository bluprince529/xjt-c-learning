#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    printf("===== 九九乘法表 =====\n\n");

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d×%d=%-2d ", j, i, i * j);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}