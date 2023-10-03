#include <stdio.h>

int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int arr_copy[10];
   int i;

   for(i = 0; i < 10; i++) {
      arr_copy[i] = arr[i];
   }
   printf("Sao chep mang trong C:\n\n");
   printf("Mang ban dau -> Mang sao chep \n");

   for(i = 0; i < 10; i++) {
      printf("    %2d          %2d\n", arr[i], arr_copy[i]);
   }

   return 0;
}