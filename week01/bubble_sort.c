#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int n;
    printf("请输入要排序的数字个数（1~100）：");
    if (scanf("%d", &n) != 1) {
        printf("输入无效\n");
        return 1;
    }
    if (n <= 0 || n > 100) {
        printf("个数必须在 1~100 之间\n");
        return 1;
    }

    int a[100];
    printf("请输入 %d 个整数，用空格分隔：", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("输入无效\n");
            return 1;
        }
    }

    printf("\n排序前：");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    printf("排序后：");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}