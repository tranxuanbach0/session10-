#include <stdio.h>

int main() {
    int mang[] = {64, 25, 12, 22, 11};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);
    int i, j, min_index, temp;

    printf("Mang truoc khi sap xep: ");
    for (i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    for (i = 0; i < kich_thuoc - 1; i++) {
        min_index = i;
        for (j = i + 1; j < kich_thuoc; j++) {
            if (mang[j] < mang[min_index]) {
                min_index = j;
            }
        }

        // Hoán ð?i n?u c?n
        if (min_index != i) {
            temp = mang[i];
            mang[i] = mang[min_index];
            mang[min_index] = temp;
        }
    }

    printf("Mang sau khi sap xep: ");
    for (i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
