#include <stdio.h>

int main() {
    int f[] = { 10, 12, 14, 16, 18, 20, 22 };
    int b[7];

    for (int i = 0; i < 7; ++i){
        b[i] = f[6 - i];
        printf("%d ", b[i]);
    }
    return 0;
}
