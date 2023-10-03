#include <stdio.h>

int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int i;
   // tinh do dai cua mang
   int size = sizeof arr / sizeof arr[0];
   // in mang ra man hinh
   printf("In tat ca phan tu cua mang: \n");
   for(i = 0; i < size; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");
   for(i = size-1; i >= 0; i--) {
      printf("%d ", arr[i]);
   }
   return 0;
}