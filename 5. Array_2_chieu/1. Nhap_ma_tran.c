#include <stdio.h>

int main() {
    int i, j;
    int col, row;

    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &col);
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &row);

    // khoi tao ma tran
    int matrix[col][row];

    printf("Nhap cac phan tu cua ma tran: \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Cac phan tu cua ma tran: \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
