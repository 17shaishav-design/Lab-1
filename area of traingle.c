#include<stdio.h>
int main ( ) {
    float length, height, area;
    printf("Enter value of length : ");
    scanf("%f",&length);
    printf("Enter value of height : ");
    scanf("%f",&height);
    area = 0.5 * length * height ;
    printf("Area is : %f",area);
}
