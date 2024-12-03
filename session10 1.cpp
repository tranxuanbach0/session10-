#include <stdio.h>

int main() {
    int mang[] = {10, 20, 30, 40, 50};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);
    int phan_tu, vi_tri = -1;

    printf("Mang hien tai: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &phan_tu);

    for (int i = 0; i < kich_thuoc; i++) {
        if (mang[i] == phan_tu) {
            vi_tri = i;
            break;
        }
    }

    if (vi_tri != -1) {
        printf("Phan tu %d ton tai trong mang tai vi tri %d.\n", phan_tu, vi_tri);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", phan_tu);
    }

    return 0;
}
