#include <stdio.h>

void bubbleSort(int mang[], int kich_thuoc) {
    int i, j, temp;
    for (i = 0; i < kich_thuoc - 1; i++) {
        for (j = 0; j < kich_thuoc - i - 1; j++) {
            if (mang[j] > mang[j + 1]) {
                temp = mang[j];
                mang[j] = mang[j + 1];
                mang[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int mang[], int kich_thuoc, int key) {
    int left = 0, right = kich_thuoc - 1, mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (mang[mid] == key) {
            return mid;
        }
        if (mang[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int mang[] = {29, 10, 14, 37, 13, 5};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);
    int phan_tu, vi_tri;

    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    bubbleSort(mang, kich_thuoc);

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    printf("Nhap phan tu can tim: ");
    scanf("%d", &phan_tu);

    vi_tri = binarySearch(mang, kich_thuoc, phan_tu);

    if (vi_tri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", phan_tu, vi_tri);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", phan_tu);
    }

    return 0;
}
