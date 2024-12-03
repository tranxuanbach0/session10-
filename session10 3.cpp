#include <stdio.h>

int main() {
    int mang[] = {29, 10, 14, 37, 13, 5};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);
    int i, j, key;

    printf("Mang truoc khi sap xep: ");
    for (i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    for (i = 1; i < kich_thuoc; i++) {
        key = mang[i];
        j = i - 1;

        while (j >= 0 && mang[j] > key) {
            mang[j + 1] = mang[j];
            j = j - 1;
        }
        mang[j + 1] = key;
    }

    printf("Mang sau khi sap xep: ");
    for (i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
