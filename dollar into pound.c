#include<stdio.h>
int main ( ) {
    float dollar, rupees, pound;
    printf("Enter value of dollar : ");
    scanf("%f",&dollar);
    rupees = dollar * 48 ;
    pound = rupees / 70 ;
    printf("Pound is : %f",pound);
}
