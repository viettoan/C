#include <stdio.h>

int main() {
   char s1[] = "VietToan";    // khai bao chuoi
   char s2[8];                // bien de giu chuoi dao nguoc

   int length = 0;
   int i = 0;

   // tinh do dai chuoi ban dau
   while(s1[length] != '\0') {
      length++;
   }

   printf("\nChuoi ban dau: ");
   printf("%s", s1);

   printf("\nChuoi theo chieu dao nguoc: ");
   for(i = --length; i>=0; i--)
      printf("%c", s1[i]);
    printf("\n");

   return 0;
}
