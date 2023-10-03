#include<stdio.h>

int main() {
    char name[50];
    // doc chuoi tu ban phim
    printf("Enter your name: ");
    gets(name);
    // hien thi chuoi
//    printf("Your name is: ");
//    puts(name);
    printf("Chuoi ban nhap la: %s", name);

    return 0;
}
