#include <stdio.h>

int countSequences(int n) {
    int a = 1, b = 2, c = 4;
    int result = 0;

    if (n == 1)
        return a;
    if (n == 2)
        return b;
    if (n == 3)
        return c;

    for (int i = 4; i <= n; i++) {
        result = (a + b + c) % 12345;
        a = b;
        b = c;
        c = result;
    }

    return result;
}

int main() {
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    int result = countSequences(n);
    printf("Кількість шуканих послідовностей довжиною %d: %d\n", n, result);

    return 0;
}
