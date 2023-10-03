#include <stdio.h>

#define LENGTH 10

int main() {
   int area;
   const int WIDTH = 5;
   area = LENGTH * WIDTH;
   printf("value of area : %d \n", area);

   return 0;
}