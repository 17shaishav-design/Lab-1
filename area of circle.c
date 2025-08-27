#include<stdio.h>
int main ( ) {
    float area, radius, pi=22/7;
    printf("Enter value of radius : ");
    scanf("%f",&radius);
    area = pi * radius * radius ;
    printf("Area is : %f",area);
}
