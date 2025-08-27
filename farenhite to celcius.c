#include<stdio.h>
int main ( ) {
    float farenhite, celcius;
    printf("Enter value of farenhite : ");
    scanf("%f",&farenhite);
    celcius = (farenhite - 32) * 5/9 ;
    printf("Celcius is : %f",celcius);
}
