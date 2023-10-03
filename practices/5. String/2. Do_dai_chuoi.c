#include<stdio.h>
#include<string.h>

int main() {
   char str[100];
   int len;

   printf("\nNhap mot chuoi bat ky: ");
   gets(str);

   len = strlen(str);

   printf("\nDo dai cua chuoi la: %d", len);
   return(0);
}
