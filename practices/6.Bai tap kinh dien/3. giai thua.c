#include<stdio.h>

/**
 * tinh giai thua
 *
 * @param n: so nguyen duong
 * @return giai thua cua so n
 */
long tinhGiaithua(int n) {
 int i;
    long giai_thua = 1;
    if (n == 0 || n == 1) {
        return giai_thua;
    } else {
        for (i = 2; i <= n; i++) {
            giai_thua *= i;
        }
        return giai_thua;
    }
}

/**
 * Ham main
 */
int main() {
    int a = 5;
    int b = 0;
    int c = 10;
    printf("Giai thua cua %d  la: %ld \n",  a, tinhGiaithua(a));
    printf("Giai thua cua %d  la: %ld \n",  b, tinhGiaithua(b));
    printf("Giai thua cua %d  la: %ld",  c, tinhGiaithua(c));
}