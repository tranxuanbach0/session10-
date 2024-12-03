#include <stdio.h>

int main() {
    int mang[] = {45, 12, 78, 34, 89, 23, 56};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);
    int temp;

    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    for (int i = 0; i < kich_thuoc - 1; i++) {
        for (int j = 0; j < kich_thuoc - i - 1; j++) {
            if (mang[j] > mang[j + 1]) {
                temp = mang[j];
                mang[j] = mang[j + 1];
                mang[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
