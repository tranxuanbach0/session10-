#include <stdio.h>

int main() {
    int mang[] = {29, 10, 14, 37, 13, 14, 5, 14};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);
    int phan_tu, vi_tri[ kich_thuoc ], vi_tri_count = 0;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &phan_tu);

    for (int i = 0; i < kich_thuoc; i++) {
        if (mang[i] == phan_tu) {
            vi_tri[vi_tri_count] = i;
            vi_tri_count++;
        }
    }

    if (vi_tri_count > 0) {
        printf("Phan tu %d duoc tim thay tai vi tri: ", phan_tu);
        for (int i = 0; i < vi_tri_count; i++) {
            printf("%d ", vi_tri[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", phan_tu);
    }

    return 0;
}
