#include <stdio.h>

int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int i, total = 0;
   // tinh do dai cua mang
   int size = sizeof arr / sizeof arr[0];

   printf("In tat ca phan tu cua mang: \n");
   for(i = 0; i < size; i++) {
       printf("%d ", arr[i]);
    }

   // tinh tong cac phan tu cua mang
   for(i = 0; i < size; i++) {
      total = total + arr[i];
    }

   printf("\nGia tri trung binh cua mang la: %f", (float) total / size);
   return 0;
}