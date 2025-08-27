#include<stdio.h>
int main ( ) {
    float kb, mb, gb, bytes;
    printf("Enter value of bytes : ");
    scanf("%f",&bytes);
    kb = bytes / 1024 ;
    mb = kb / 1024 ;
    gb = mb / 1024 ;
    printf("KB is : %f\nMB is : %f\nGB is : %f",kb,mb,gb);
}
