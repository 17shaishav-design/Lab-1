#include<stdio.h>
int main ( ) {
    float kilograms, grams;
    printf("Enter value of kilograms : ");
    scanf("%f",&kilograms);
    grams = kilograms * 1000 ;
    printf("Grams is : %f",grams);
}
