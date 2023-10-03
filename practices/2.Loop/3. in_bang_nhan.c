#include <stdio.h>

int main() {
   int i, n;

   n = 6;

   printf("In bang nhan:\n");

   for(i = 1; i <= 10; i++) {
      printf("%3d  x %2d  =  %3d\n", n, i, n*i);
   }

   return 0;
}