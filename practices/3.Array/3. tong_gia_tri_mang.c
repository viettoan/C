#include <stdio.h>

int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int i, total = 0;
   // tinh do dai cua mang
   int size = sizeof arr / sizeof arr[0];
   // tinh tong gia tri cua mang
   for(i = 0; i < size; i++) {
      total = total + arr[i];
    }
   // in tong gia tri cua mang ra man hinh
   printf("Tong cac gia tri cua mang la: %d ", total);
   return 0;
}