#include<stdio.h>
int main ( ) {
    float grams, kilogram;
    printf("Enter value of grams : ");
    scanf("%f",&grams);
    kilogram = grams / 1000 ;
    printf("Kilogram is : %f",kilogram);
}
